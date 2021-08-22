#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//write code hare

	int k;
	cin >> k;

	string s;
	cin >> s;


	if (s.length() <= k) {
		cout << s;
	} else {
		s[k] = '.';
		s[k + 1] = '.';
		s[k + 2] = '.';

		s[k + 3] = '\0';

		for (int i = 0; s[i] != '\0'; i++) {
			cout << s[i];
		}
	}

}