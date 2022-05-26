/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int ans = 0;
void check(int a, int b, int c) {

	int d = (a * b ) + c;

	int e = (a + b) * c;
	int g = (a + b) + c;

	int h = (a * b) * c;
	ans = max(ans, max(max(g, h), max(d, e)));
}

void solve() {

	//paste kro
	int a, b, c;
	cin >> a >> b >> c;
	check(a, b, c);
	check(b, a, c);
	check(c, b, a);
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
	//cin >> TC;

	while (TC--) {

		solve();
	}
}