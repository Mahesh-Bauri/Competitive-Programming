#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif




	string s; cin >> s;

	for (int i = 0; i < s.length(); i++) {

		if (s[i] == ',') {
			s[i] = ' ';
		}

	}

	cout << s;

}