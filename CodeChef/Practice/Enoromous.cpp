#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//write code hare


	long long n, k;
	cin >> n >> k;

	int count = 0;
	for (int i = 0; i < n; i++) {
		long long t;
		cin >> t;

		if (t % k == 0) {
			count++;
		}
	}
	cout << count;
}