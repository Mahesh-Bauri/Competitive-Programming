/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;




void solve() {
	int n, k, v;
	cin >> n >> k >> v;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int s = 0;
	for (int i = 0; i < n; i++) {
		s += arr[i];
	}

	int total = v * (n + k);
	// cerr << total << endl;

	int ans = floor((total - s) / (double)k);
	cerr << total - s << endl;
	cout << ans << endl;
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