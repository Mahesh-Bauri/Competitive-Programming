#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//write code hare



	int t;
	cin >> t;

	while (t-- != 0) {

		int n;
		cin >> n;
		int f = 1;
		string s;
		cin >> s;
		int frq[256];

		for (int i = 0; i < s.length(); i++) {

			frq[s[i]] += 1;
		}

		for (int j = 0 ; j < 256; j++) {

			if (frq[j] % 2 == 0 ) {
				f = 0;
				cout << "NO" << endl;
				break;
			}

		}
		if (f == 1) {
			cout << "YES" << endl;
		}
	}
}