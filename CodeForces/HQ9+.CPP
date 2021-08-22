#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//write code hare

	string s;
	cin >> s;
	int f = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'H') {
			f = 1;
			break;
		}
		else if (s[i] == 'Q') {
			f = 1;
			break;
		}
		else if (s[i] == '9') {
			f = 1;
			break;
		}


	}


	if (f == 1) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

}