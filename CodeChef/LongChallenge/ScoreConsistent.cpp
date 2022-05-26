/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {

	int a, b, c, d;
	cin >> a >> b >> c >> d;


	if (a <= c && b <= d) {
		cout << "POSSIBLE" << endl;
	} else {
		cout << "IMPOSSIBLE" << endl;
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