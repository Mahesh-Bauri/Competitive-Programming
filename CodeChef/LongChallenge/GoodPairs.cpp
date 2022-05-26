/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;


void solve() {

	long long int n;
	cin >> n;
	map<long long int, vector<long long>> um;

	long long int  b[n];
	long long int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> b[i];
		um[b[i]].push_back(i);
	}

	long long int count = 0;

	for (int i = 0; i < n; i++) {

		if (um.find(a[i]) != um.end()) {

			for (long long x : um[a[i]]) {

				if (x > i && a[i] == b[x] && b[i] == a[x]) {

					count++;
				}

			}

		}

	}



	cout << count << "\n";

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