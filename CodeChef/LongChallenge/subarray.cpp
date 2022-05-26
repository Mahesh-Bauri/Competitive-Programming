/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {
	int n;
	cin >> n;
	set<pair<int, int>> st;
	vector<pair<int, int>> v;
	int arr[n + 1];
	int count = 0;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}


	for (int i = 1; i <= n; i++) {

		int ele = arr[i];

		if (ele > n) {
			continue;
		}

		if (ele == 1) {
			v.push_back({i, i});
			cerr << arr[i] << " " << arr[i] << endl;
			continue;
		}
		int start = max(i - (ele - i), 1);
		int end = i + (ele - i);
		for (int j = start; j <= i ; j++) {

			if (start >= 1 && end <= n) {



				cerr << arr[start] << " " << arr[end] << endl;
				v.push_back({start, end});


			}
			start++;
			end++;

		}
		cout << endl;
	}


	for (auto x : v) {
		st.insert(x);
	}


	cout << st.size() << "\n";

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