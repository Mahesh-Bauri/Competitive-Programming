/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {
	int l, r;
	cin >> l >> r;

	int n = r - l ;

	int ans = ((n * (n + 1)) / 2) + n + 1;
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