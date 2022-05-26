/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {
	long long int n, m;
	cin >> n >> m;

	long long int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	// int first = INT_MIN, second = INT_MIN;

	// for (int i = 0; i < n; i++) {
	// 	if (first < arr[i]) {
	// 		first = arr[i];
	// 	}
	// }

	// for (int i = 0; i < n; i++) {
	// 	if (second < arr[i] && arr[i] != first) {
	// 		second = arr[i];
	// 	}
	// }


	// long long int ans = first + second;

	// long long int sub = first - second;

	// if (sub > 0) {
	// 	ans += (sub % m);
	// } else if (sub < 0) {
	// 	ans += abs(m + sub);
	// } else {
	// 	ans += 0;
	// }


	// long long int ans1 = first + first;

	// long long int sub1 = first - first;

	// if (sub1 > 0) {
	// 	ans1 += (sub1 % m);
	// } else if (sub1 < 0) {
	// 	ans1 += abs(m + sub1);
	// } else {
	// 	ans1 += 0;
	// }


	long long int maxVal = INT_MIN;
	// for (int i = 0; i < n ; i++) {
	for (int j = 0; j < n; j++) {
		//cerr << arr[i] << " " << arr[j] << endl;
		long long int ans = arr[j] + arr[n - 1];

		long long int sub = arr[j] - arr[n - 1];

		if (sub > 0) {
			ans += (sub % m);
		} else if (sub < 0) {
			ans += abs(m + sub);
		} else {
			ans += 0;
		}


		if (maxVal < ans) {
			maxVal = ans;
		}

	}
	// }

	// cout << max(ans, ans1) << "\n";
	cout << maxVal << endl;

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