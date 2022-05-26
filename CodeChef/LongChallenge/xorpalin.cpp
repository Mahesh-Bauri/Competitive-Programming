/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {
	int n;
	cin >> n;

	string s;
	cin >> s;

	int count = 0;

	int l = 0;
	int r = n - 1;

	while (l < r) {

		if (s[l] != s[r]) {
			count++;
		}
		l++;
		r--;

	}


	int ans = ceil(count / (double)2);

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