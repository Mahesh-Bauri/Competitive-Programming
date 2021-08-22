#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//write code hare

	int x, y;
	cin >> x >> y;


	int min = (x * 2);
	int max = (x * 4);

	if (y >= min && y <= max) {

		if (y % 2 == 0) {
			cout << "Yes";
		}
		else {
			cout << "No";
		}

	}
	else
	{
		cout << "No";
	}


}