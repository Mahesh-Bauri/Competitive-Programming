#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin >> t;

	while (t-- != 0) {
		int n, m;
		cin >> n >> m;


		if ((n * m) % 2 == 0) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}

}