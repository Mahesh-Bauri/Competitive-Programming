#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif



	long k;
	long n;
	long w;
	long sum = 0;
	cin >> k;
	cin >> n;
	cin >> w;



	for (int i = 1 ; i <= w; i++) {
		sum = sum + (i * k);
	}

	sum  = sum - n;
	if (sum > 0) {
		cout << sum;
	}
	else {
		cout << "0";
	}



}