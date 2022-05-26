/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {

	int a, b, c, d;
	unordered_map<int, int> um;
	for (int i = 0; i < 4; i++) {

		int x;
		cin >> x;
		um[x]++;
	}

	if (um.size() == 4) {
		cout << "2" << endl;
	} else if (um.size() == 3) {
		cout << "2" << endl;
	} else if (um.size() == 2) {
		cout << "1" << endl;
	} else {
		cout << "0" << endl;
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