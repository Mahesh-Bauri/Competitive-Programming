#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//write code hare


	int t ;
	cin >> t;

	while (t-- != 0) {
		int n;
		cin >> n;
		int max = INT_MIN;
		int min = INT_MAX;
		int arr[n];
		int posmx = -1;
		int posmi = -1;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}


		for (int j = 0; j < n; j++) {

			if (arr[j] > max) {
				max = arr[j];
				posmx = j;
			}
			if (arr[j] < min) {
				min = arr[j];
				posmi = j;
			}
		}
		if (posmx <= posmi) {
			cout << max << " " << min << "\n";
		} else {
			cout << min << " " << max << "\n";
		}
	}
}