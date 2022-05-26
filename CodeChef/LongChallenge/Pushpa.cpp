/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {
	long long int n;
	cin >> n;
	long long int arr[n];
	unordered_map<int, int> um;
	unordered_map<int, int> ans;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}


	for (int i = 0; i < n; i++) {
		um[arr[i]]++;
	}

	long long int maxVal = INT_MIN;

	for (int i = 0; i < n; i++) {
		if (maxVal < arr[i]) {
			maxVal = arr[i];
		}
	}


	for (auto x : um) {

		ans[x.first] = x.first + x.second - 1;

	}

	for (auto y : ans) {
		if (maxVal < y.second) {
			maxVal = y.second;
		}
	}

	cout << maxVal << endl;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int TC = 1;
	cin >> TC;

	while (TC--) {

		solve();
	}
}