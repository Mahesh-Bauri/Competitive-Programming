#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;
	int count = 0;
	int frq[256] = {0};
	int len = s.length();

	for (int i = 0; i < len; i++) {
		frq[s[i]] += 1;
	}

	for (int i = 0; i < 256; i++) {
		if (frq[i] != 0) {
			count++;
		}
	}


	if (count % 2 == 0) {
		cout << "CHAT WITH HER!";
	}
	else {
		cout << "IGNORE HIM!";
	}

}