#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//write code hare

	int count = 0;
	int n = 5;
	int x ;

	while (n-- != 0) {
		cin >> x;
		if (x == 0) {
			count++;
			break;
		}
		count = count + 1;
	}

	cout << count;
}