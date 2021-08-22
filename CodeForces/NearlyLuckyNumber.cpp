#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif



	string s;
	cin >> s;

	int f = 1;
	for (int i = 0; i < s.length(); i++) {

		if (s[i] != 4 && s[i] != '\0') {
			f = 0;
			break;
		}
		else if (s[i] != 7 && s[i] != '\0') {
			f = 0;
			break;
		}


	}
	if (f == 0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}