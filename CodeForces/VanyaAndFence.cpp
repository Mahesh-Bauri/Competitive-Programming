#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//write code hare

	int n, h;
	cin >> n >> h;

	int arr[n];
	int count = 0;
	for (int i = 0; i < n; i++) {

		cin >> arr[i];
	}


	for (int j = 0; j < n; j++) {

		if (arr[j] <= h) {
			count += 1;
		}
		else {
			count += 2;
		}
	}

	cout << count;
}