/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;



void solve() {
	string s;
	cin >> s;

	int arr[10] = {0};

	for (int i = 0; i < 10; i++) {

		arr[s[i] - '0'] = 1;
	}


	for (int i = 0; i < 10; i++) {
		if (arr[i] == 0) {
			cout << i << endl;
			break;
		}
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
	//cin >> TC;

	while (TC--) {

		solve();
	}
}