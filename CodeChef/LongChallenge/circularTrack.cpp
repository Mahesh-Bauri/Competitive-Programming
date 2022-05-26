/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {
	long long int a, b, m;
	cin >> a >> b >> m;

	long long int first = abs(b - a);

	long long int second = abs((m - max(a, b)) + min(a, b));
	long long int ans = min(first, second);
	cout << ans << endl;


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