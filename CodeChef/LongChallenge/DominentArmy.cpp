/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {
	int na, nb, nc;
	cin >> na >> nb >> nc;


	int bc = nb + nc;
	int ac = na + nc;
	int ab = na + nb;

	if (na > bc) {
		cout << "YES" << endl;
	} else if (nb > ac) {
		cout << "YES" << endl;
	} else if (nc > ab) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
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