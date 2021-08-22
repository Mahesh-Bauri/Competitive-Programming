#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int m = 5, n = 5;
	int a, b;
	int arr[m][n];
	int ans = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {

			cin >> arr[i][j];

		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {

			if (arr[i][j] == 1) {
				a = i;
				b = j;
				break;
			}

		}
	}

	if (a <= 2) {
		ans = ans + (2 - a);
	}
	else {
		ans = ans + (a - 2);
	}
	if (b <= 2) {
		ans = ans + (2 - b);
	}
	else {
		ans = ans + (b - 2);
	}

	cout << ans;
}