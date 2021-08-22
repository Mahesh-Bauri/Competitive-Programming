/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {

	long long a, b, c;
	cin >> a >> b >> c;

	int fmax = INT_MIN;
	int second = INT_MIN;


	if ( a >= b and a >= c) {
		fmax = a;
	} else if ( b >= a and b >= c) {
		fmax = b;
	} else {
		fmax = c;
	}


	if (a >= b and a >= c ) {

		if ( b >= c) {
			second = b;
		} else {
			second = c;
		}

	} else if ( b >= a and b >= c) {
		if (a >= c) {
			second = a;
		} else {
			second = c;
		}
	} else {
		if (a >= b) {
			second = a;
		} else {
			second = b;
		}
	}


	cout << fmax + second << endl;

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