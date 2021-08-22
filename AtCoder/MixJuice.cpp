#include<iostream>
#include<algorithm>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif




	int n, k;
	int min = 0;
	cin >> n >> k;

	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);
	for (int j = 0; j < k; j++) {
		min = min + arr[j];
	}

	cout << min;

}