#include<iostream>
#include<math.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int n ;
	cin >> n;


	int ans = ceil((double)n / (double) 5.0);


	cout << ceil(ans);
}