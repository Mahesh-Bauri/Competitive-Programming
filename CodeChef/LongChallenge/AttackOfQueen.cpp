/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {

	long long int n;
	cin >> n;
	int i, j;
	cin >> i >> j;


	long long int count = (n - 1) * 2;

	int top = 0, left = 0, right = 0, bottom = 0;

	top = i - 1;
	left = j - 1;
	right = n - j;
	bottom = n - i;

	count += min(top, right) + min(right, bottom) + min(bottom, left) + min(left, top);

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