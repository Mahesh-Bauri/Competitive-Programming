#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//write code hare

	int n, k, x, y;
	cin >> n >> k >> x >> y;

	int fee ;
	if (n > k) {
		fee =  (k * x) + ((n - k) * y);
	}
	else {
		fee = (n * x);
	}
	cout << fee;



}