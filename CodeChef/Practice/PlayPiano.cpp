#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//write code hare

	int t;
	cin >> t;

	while (t-- != 0) {

		int f = 0;
		string s;
		cin >> s;

		for (int i = 0; i < s.size(); i += 2) {
			f = 0;
			if (s[i] == s[i + 1]) {
				f = 1;
				break;
			}
		}

		if (f == 0) {
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}

	}
}