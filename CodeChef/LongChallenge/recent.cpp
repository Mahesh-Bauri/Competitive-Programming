/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {
	int n;
	cin >> n;
	int lcount = 0, scount = 0;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;

		if (s[0] == 'S') scount++;
		if (s[0] == 'L') lcount++;
	}


	cout << scount << " " << lcount << endl;


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