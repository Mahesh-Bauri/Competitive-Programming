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
	int count = 0;
	int l = 0;
	int r = 0;
	string s;
	cin >> s;



	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'L') {
			l++;
		}
		else {
			r++;
		}
	}

	int t = -l;
	while (t <= r) {
		count++;
		t++;
	}

	cout << count;
}