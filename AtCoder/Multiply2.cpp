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
	long long pro = 1;
	while (n-- != 0) {
		long long a;

		cin >> a;
		pro = pro * a;

	}
	if (pro <= 1e+18) {
		cout << pro;
	}
	else {
		cout << "-1";
	}
}