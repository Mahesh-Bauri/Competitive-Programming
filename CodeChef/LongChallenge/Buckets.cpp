/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {
	int w, x, y, z;

	cin >> w >> x >> y >> z;

	int ans = (y * z) + w;

	if (ans > x) {
		cout << "overFlow" << endl;
	} else if (ans < x) {
		cout << "Unfilled" << endl;
	} else {
		cout << "filled" << endl;
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
	cin >> TC;

	while (TC--) {

		solve();
	}
}