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


	if (s[1] == 'R') {
		cout << "ABC";
	}
	else {
		cout << "ARC";
	}
}