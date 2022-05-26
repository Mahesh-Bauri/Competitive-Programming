/******************** Beginning of Template **************************/
/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

#define IOS  ios_base::sync_with_stdio(0);
#define  CIN  cin.tie(0); cout.tie(0);


// Dynamic Programming or DP / Tabulation / Bottom-Up Approach

int fibo(int n) {

	int arr[n + 1];

	arr[0] = 0;
	arr[1] = 1;

	for (int i = 2; i <= n; i++) {

		arr[i] = arr[i - 1] + arr[i - 2];

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

	int ans = fibo(n);

	cout << ans;




}