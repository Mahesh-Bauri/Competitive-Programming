#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//write code hare

	int k;
	int a, b;
	int f = 0;
	cin >> k >> a >> b;



	for (int i = a; i <= b; i++) {
		if (i % k == 0) {
			f = 1;
			break;
		}
	}


	if (f == 1) {
		cout << "OK";
	}
	else {
		cout << "NG";
	}
}