/******************** Beginning of Template **************************/
/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

#define IOS  ios_base::sync_with_stdio(0);
#define  CIN  cin.tie(0); cout.tie(0);




int minStep(int n) {

	if (n <= 1) {
		return 0;
	}

	int arr[n + 1];

	arr[0] = 0;
	arr[1] = 0;


	for (int i = 2; i <= n; i++) {

		int x = INT_MAX;
		int y = INT_MAX;
		int z = INT_MAX;

		x = arr[i - 1];

		if (i % 2 == 0) {
			y = arr[i / 2];
		}
		if (i % 3 == 0) {
			z = arr[i / 3];
		}

		arr[i] = 1 + min(x, min(y, z));




	}


	return arr[n];

}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	IOS
	CIN


	/************************* Start Code Here ******************/

	int n;
	cin >> n;


	int ans = minStep(n);


	cout << ans;


}