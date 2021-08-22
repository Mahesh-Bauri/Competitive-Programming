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


		int n, k;
		cin >> n >> k;
		int sum = 0;

		for (int j = 0; j < n; j++) {
			int ti, di;

			cin >> ti >> di;

			if (ti <= k) {
				k = k - ti;
			}
			else {
				sum = sum + (ti - k) * di;
			}
		}
		cout << sum << "\n";
	}

}