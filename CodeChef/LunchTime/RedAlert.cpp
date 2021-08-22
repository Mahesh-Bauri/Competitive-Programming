/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {
	int n, d, h;

	int level = 0;
	cin >> n >> d >> h;
	bool flag = false;
	int days[n];
	for (int i = 0; i < n; i++) {
		cin >> days[i];
	}


	for (int i = 0; i < n; i++) {


		if (days[i] > 0) {
			level += days[i];
		} else if (days[i] == 0) {

			if (level >= d) {
				level -= d;
			} else {
				level = 0;
			}


		}

		if ( level > h) {
			flag = true;
			break;
		}


	}


	if (flag ) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
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