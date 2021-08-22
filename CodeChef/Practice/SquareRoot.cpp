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

		long n;
		cin >> n;

		int sq ;
		int i = 1;
		while ((i * i) <= n) {

			if ((i * i) <= n) {
				sq = i;
				i++;
			} else {
				break;
			}

		}
		cout << sq << "\n";
	}
}