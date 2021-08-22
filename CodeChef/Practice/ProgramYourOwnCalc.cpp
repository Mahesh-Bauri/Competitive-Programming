#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//write code hare


	double a, b;
	cin >> a >> b;

	char ch;
	cin >> ch;


	if (ch == '+') {
		cout << (a + b) << endl;
	}
	else if (ch == '-') {
		cout << (a - b) << endl;
	}
	else if (ch == '*') {
		cout << (a * b) << endl;
	}
	else if (ch == '/') {
		cout << fixed << (a / b) << endl;
	}

}