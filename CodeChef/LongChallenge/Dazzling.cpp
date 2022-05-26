/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {
	unsigned long long int n;
	cin >> n;

	unsigned long long int ans;


	if ((n - 1) % 2 == 0) {



		if (((n - 2) / 2) % 2 == 0) {
			cout << n << endl;
		} else {
			cout << "3" << endl;
		}


	} else {
		if (n - 1 == 3) {
			cout << "7" << endl;
			return;
		}
		cout << "3" << endl;
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