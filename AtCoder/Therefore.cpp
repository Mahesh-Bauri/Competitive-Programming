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

	int d = (n % 10);

	if (d == 2 || d == 4 || d == 5 || d == 7 || d == 9 ) {
		cout << "hon";
	}
	else if (d == 0 || d == 1 || d == 6 || d == 8 ) {
		cout << "pon";
	}
	else if (d == 3 ) {
		cout << "bon";
	}
}