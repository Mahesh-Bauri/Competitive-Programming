#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//write code hare


	long d1, d2, d3;

	cin >> d1 >> d2 >> d3;



	if (((2 * d1) + (2 * d2)) > d3) {
		cout << (d1 + d2 + d3);
	}
	else {
		cout << (2 * d1) + (2 * d2);
	}
}