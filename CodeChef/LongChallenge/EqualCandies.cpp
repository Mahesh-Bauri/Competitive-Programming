/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {
	int n;
	cin >> n;

	int arr[n];
	int minC = INT_MAX;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];

		if (minC > arr[i]) {
			minC = arr[i];
		}
	}

	long long int ans = 0;
	for (int i = 0; i < n; i++) {

		ans += arr[i] - minC;
	}

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