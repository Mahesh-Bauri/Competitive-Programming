#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//write code hare

	long long a;
	long double b;

	cin >> a >> b;

	long long c = a * b;
	cout << c;
}