/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {

	string s;
	cin >> s;

	int num1 = 0, num2 = 0;
	string n1 = s.substr(0, 3);
	string n2 = s.substr(3, s.length());


	for (int i = 0; i < n1.length(); i++) {
		num1 += (n1[i] - '0');
	}
	for (int i = 0; i < n2.length(); i++) {
		num2 += (n2[i] - '0');
	}

	if (num1 == num2) {
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