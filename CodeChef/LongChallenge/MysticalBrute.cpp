/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;




void solve() {
	long long int n, q, l, r, x;
	cin >> n;
	long long int arr[n + 1];
	long long int pre[n + 1];
	pre[0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}



	cin >> q;
	// --q;
	// cin >> l >> r >> x;


	// for (int i = 1; i <= n; i++) {

	// 	if ((arr[i]^x) > (arr[i]&x)) {
	// 		pre[i] = 1;
	// 	} else {
	// 		pre[i] = 0;
	// 	}
	// }

	// for (int i = 2; i <= n; i++) {
	// 	pre[i] += pre[i - 1];
	// }


	// for (int i = 1; i <= n; i++) {
	// 	cerr << pre[i] << " ";
	// }

	// count = pre[r] - pre[l - 1];
	// cout << count << "\n";
	while (q--) {
		long long int count = 0;
		cin >> l >> r >> x;
		for (int i = l; i <= r; i++) {

			if ((arr[i]^x) > (arr[i]&x)) {
				cerr << arr[i] << " ";
				count++;
			}
		}
		cerr << endl;
		// count = pre[r] - pre[l - 1];

		cout << count << "\n";

	}
	// cout << endl;
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