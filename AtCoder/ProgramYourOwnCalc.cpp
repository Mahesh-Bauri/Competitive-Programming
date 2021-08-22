#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//write code hare


	int a, b;
	cin >> a >> b;

	char ch;
	cin >> ch;


	if (ch == '+') {
		cout << (a + b);
	}
	else if (ch == '-') {
		cout << (a - b);
	}
	else if (ch == '*') {
		cout << (a * b);
	}
	else if (ch == '/') {
		cout << ((double)a / b);
	}

}