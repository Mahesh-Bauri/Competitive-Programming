/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



unsigned long long int mypow(int x, int n) {


	if (n == 0) {
		return 1;
	}

	if (n == 1) {
		return x;
	}


	return (x % 1000000007 * mypow(x, n - 1) % 1000000007 ) % 1000000007;



}



void solve() {
	int n;
	cin >> n;

	unsigned long long int mod = 1000000007;
	char arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	unordered_map<char, int> um;
	unordered_map<char, int> um2;

	um2['c'] = 1;
	um2['g'] = 1;
	um2['l'] = 1;
	um2['r'] = 1;

	um['a'] = 1;
	um['e'] = 1;
	um['i'] = 1;
	um['o'] = 1;
	um['u'] = 1;


	int con = 0;
	int con2 = 0;
	int vow = 0;
	for (int i = 0; i < n; i++) {

		if (um.count(arr[i]) != 0) {
			vow++;
		} else if (um2.count(arr[i]) != 0) {
			con2++;
		} else {
			con++;
		}

	}

	unsigned long long int ans = 1;

	if (vow == n || con == n) {
		cout << 1 << endl;
		return;
	}


	if (con2 != 0) {

		ans =  mypow(2, con2) % mod;

	}

	cout << ans << "\n";


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