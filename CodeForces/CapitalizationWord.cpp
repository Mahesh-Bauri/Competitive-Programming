#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;

	char ch = s[0];



	if (!(ch >= 65 && ch <= 90) ) {
		s[0] = ch - 32;
	}

	cout << s;

}