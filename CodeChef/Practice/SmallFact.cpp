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
		long long n;
		long long fact = 1;
		cin >> n;

		for (int i = 1; i <= n; i++) {
			fact = fact * i;
		}
		cout << fact << "\n";
	}
}