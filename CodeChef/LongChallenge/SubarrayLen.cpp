/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {
	int n;
	cin >> n;
	set<pair<int, int>> st;
	int arr[n + 1];
	int count = 0;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i <= n; i++) {

		int ele = arr[i];

		int start = i - ele + 1;
		int end = i;

		int left = i;
		int right = n - i + 1;

		if (left >= ele && right <= n) {
			count += ele;
		} else if (left < ele && right <= n) {
			count += left;
		} else if (right < n && left >= ele) {
			count += right;
		}



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
	cin >> TC;

	while (TC--) {

		solve();
	}
}