#include<iostream>
using namespace std;



string repS(string s) {

	for (int i = 0; i < s.length(); i++) {

		if (s[i] >= 65 && s[i] <= 90) {
			s[i] = s[i] + 32;
		}

	}
	return s;
}
string repC(string s) {

	for (int i = 0; i < s.length(); i++) {

		if (s[i] >= 97 && s[i] <= 122) {
			s[i] = s[i] - 32;
		}

	}
	return s;
}





int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//write code hare

	string s;
	cin >> s;


	int C = 0;
	int S = 0;


	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 65 && s[i] <= 90) {
			C++;
		}
		else {
			S++;
		}

	}

	if (C > S) {
		cout << repC(s);
	}
	else {
		cout << repS(s);
	}

}
