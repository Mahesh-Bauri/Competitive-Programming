/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int ind;

	for (ind = n - 1; ind >= 0; ind--) {

		if (arr[ind] != 0) {
			break;
		}

	}

	cout << ind << endl;

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