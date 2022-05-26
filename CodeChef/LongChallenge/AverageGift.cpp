/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {
	long long int n, x;
	cin >> n >> x;

	long long int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}


	unsigned long long int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	long double ans = floor(sum / (double) n);

	if (ans == x) {
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