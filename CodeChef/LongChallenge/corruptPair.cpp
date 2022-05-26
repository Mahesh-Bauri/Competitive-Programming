/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int i = 0;
	while (i < n) {
		if (arr[i] != arr[arr[i] - 1]) {
			swap(arr[i], arr[arr[i] - 1]);
		} else {
			i++;
		}
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] != i + 1) {
			cout << arr[i] << " " << i + 1 << " ";
		}
	}




}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int TC = 1;
	//cin >> TC;

	while (TC--) {

		solve();
	}
}