#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//write code hare

	// int x = 10;
	// int& r = x;

	// cout << &x << "\n";
	// cout << &r << "\n";

	// r = 100;
	// cout << r << "\n";
	// cout << x << "\n";


	int p[] = {1, 2, 3, 4, 5, 6};

	int length = sizeof(p) / sizeof(int);
	cout << length;
}