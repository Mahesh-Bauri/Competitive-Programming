#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//write code hare


	string s;
	int count;

	while (1) {
		if (s[0] == ' ') {
			break;
		}
		count = 0;
		for (int i = 0; s[i] != '\0'; i++) {
			if (s[i] == ' ') {
				count += 1;
			}
		}

		cout << count;

	}
}