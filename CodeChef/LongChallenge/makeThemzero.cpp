/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {
	int n;
	cin >> n;
	int odd = 0;
	int arr[n];
	unordered_map<int, int> um;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] % 2 != 0) {
			odd++;
		}
	}


	for (int i = 0; i < n; i++) {
		um[arr[i]]++;
	}


	if (um.count(1) != 0) {

		if (um[1] == n) {
			cout << "1" << endl;
			return;
		}
		cout << um.size() - 1 << endl;
		return;
	}

	if (um.count(0) != 0 && um[0] == n) {
		cout << "0" << endl;
		return;
	}

	if (um.count(0) != 0) {

		cout << um.size() - 1 << endl;
		return;
	}


	if (odd > 0) {
		cout << um.size() - 1 << endl;
	} else {
		cout << um.size() << endl;
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