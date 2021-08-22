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
		long k;
		cin >> n;
		cin >> k;

		char carr[n];
		string s;
		long  dist;


		for (int j = 0; j < n; j++) {
			cin >> dist;
			if (dist % k == 0) {
				carr[j] = '1';
			}
			else {
				carr[j] = '0';
			}

		}
		s = carr;
		cout << s;
	}

}