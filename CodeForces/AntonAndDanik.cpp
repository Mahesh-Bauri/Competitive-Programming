#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//write code hare


	int n;
	cin >> n;
	string s;
	cin >> s;

	int a = 0;
	int d = 0;


	for (int i = 0; i < s.length(); i++) {

		if (s[i] == 'A') {
			a++;
		}
		else if (s[i] == 'D') {
			d++;
		}
	}



	if (a < d) {
		cout << "Danik";
	}
	else if (a > d) {
		cout << "Anton";
	}
	else {
		cout << "Friendship";
	}
}