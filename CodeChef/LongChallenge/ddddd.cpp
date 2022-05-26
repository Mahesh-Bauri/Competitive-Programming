/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {
	int n, x;
	int sum = 0;
	cin >> n >> x;

	for (int i = 0; i < n - 1; i++) {
		int z;
		cin >> z;
		sum += z;
	}


	int y = ((n ) * x) - sum;

	if (y > 0) {
		cout << y << endl;
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