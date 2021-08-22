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
	int ga = 2;
	while (n-- != 0) {
		int p, q;
		cin >> p >> q;

		if ((q - p) >= 2) {
			count++;
		}

	}
	cout << count;

}