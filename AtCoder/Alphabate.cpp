#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	char c;
	cin >> c;

	if (c >= 65 && c <= 90) {
		cout << "A";
	}
	else {
		cout << "a";
	}

}