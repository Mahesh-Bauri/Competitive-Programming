/******************** Beginning of Template **************************/
/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

#define IOS  ios_base::sync_with_stdio(0);
#define  CIN  cin.tie(0); cout.tie(0);




int minStep(int n, int *arr) {

	if (n <= 1) {
		return 0;
	}

	if (arr[n] != -1) {
		return arr[n];
	}

	int x = INT_MAX;
	int y = INT_MAX;
	int z = INT_MAX;

	x = minStep(n - 1, arr);

	if (n % 2 == 0) {
		y = minStep(n / 2, arr);
	}

	if (n % 3 == 0) {
		z = minStep(n / 3, arr);
	}


	int ans = 1 +  min(x, min(y, z));


	arr[n] = ans;
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

	int arr[n + 1];

	for (int i = 0; i <= n; i++) {
		arr[i] = -1;
	}



	int ans = minStep(n, arr);

	for (int i = 0; i <= n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << ans;


}