/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {
	int x, y;

	cin >> x >> y;

	int ans1 = (500 - (x * 2)) + (1000 - (x * 4) - (y * 4));
	int ans2 = (500 - (y * 2) - (x * 2)) + (1000 - (y * 4));

	cout << max(ans1, ans2) << endl;

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