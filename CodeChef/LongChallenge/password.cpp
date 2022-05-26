/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {
	string pass;
	cin >> pass;
	int n = pass.length();
	bool upper = false, digit = false, special = false, small = false;
	if (pass.length() < 10) {
		cout << "NO" << endl;
		return;
	}

	for (int i = 1; i < n - 1; i++) {


		if (pass[i] >= 'A' && pass[i] <= 'Z') {
			upper = true;
		} else if (pass[i] >= '0' && pass[i] <= '9') {
			digit = true;
		} else if ((pass[i] == '@') || (pass[i] == '#') ||
		           (pass[i] == '%') || (pass[i] == '&') || (pass[i] == '?')) {
			special = true;
		} else if (pass[i] >= 'a' && pass[i] <= 'z') {
			small = true;
		}


	}

	if (pass[0] >= 'a' && pass[0] <= 'z' || pass[n - 1] >= 'a' && pass[n - 1] <= 'z') {
		small = true;
	}
	// cerr << upper << digit << special << small << endl;
	if (upper && digit && special && small) {
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