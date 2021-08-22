/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {

	long long n;
	cin >> n;

	int count = 0;
	long long arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}


	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {

			int diff = arr[i] - arr[j];

			double left = (double)diff / arr[i];
			double right = (double)diff / arr[j];

			if (left < right) {
				count++;
			}




		}
	}

	cout << 2 * count << endl;

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