#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//write code hare

	int n;
	cin >> n;
	int count = 0;

	while (n-- != 0) {
		string s;
		cin >> s;

		if (s[1] == '+') {
			count++;
		}
		else {
			count--;
		}
	}

	cout << count;


}