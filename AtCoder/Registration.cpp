#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//write code hare


	string s;
	string t;
	int f = 1;
	int f1 = 1;
	cin >> s;
	cin >> t;

	if ((s.size() + 1) == (t.size())) {
		f1 = 0;
	}



	for (int i = 0; (i < s.size()) && (f1 == 0) ; i++) {

		if (s[i] != t[i]) {
			f = 0;
			break;
		}

	}


	if (f == 1) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}