/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {
	int p1, p2, p3, p4;
	cin >> p1 >> p2 >> p3 >> p4;
	int count = 0;
	if (p1 >= 10) {
		count++;
	} if (p2 >= 10) {
		count++;
	} if (p3 >= 10) {
		count++;
	}
	if (p4 >= 10) {
		count++;
	}

	cout << count << endl;

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int TC = 1;
	//cin >> TC;

	while (TC--) {

		solve();
	}
}