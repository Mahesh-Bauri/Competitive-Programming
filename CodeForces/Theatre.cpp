#include<iostream>
#include<math.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//write code hare

	long m, n, a;
	cin >> m >> n >> a;


	long long ans = (ceil((double)m / a) * ceil((double)n / a));

	cout << ans;


}