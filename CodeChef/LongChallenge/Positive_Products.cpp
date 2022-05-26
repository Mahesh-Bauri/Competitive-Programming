/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {
	long long n;
	cin >> n;

	long long pos = 0;
	long long neg = 0;
	unsigned long long int  count = 0;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x > 0) pos++;

		if (x < 0) neg++;

	}

	count += (pos * (pos - 1)) / 2;


	count += (neg * (neg - 1)) / 2;


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
	cin >> TC;

	while (TC--) {

		solve();
	}
}