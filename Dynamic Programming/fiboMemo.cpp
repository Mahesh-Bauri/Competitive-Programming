/******************** Beginning of Template **************************/
/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

#define IOS  ios_base::sync_with_stdio(0);
#define  CIN  cin.tie(0); cout.tie(0);



// Top-down Approach / Memoization


int fibo(int n, int *ans) {

	if (n <= 1) return n;


	// if ans already exist

	if (ans[n] != -1) {
		return ans[n];
	}

	// calculate the ans

	int a = fibo(n - 1, ans);
	int b = fibo(n - 2, ans);


	// save it for future
	ans[n] = a + b;

	return ans[n];



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
	arr[0] = 0;
	arr[1] = 1;

	int ans = fibo(n, arr);

	// for (int i = 0; i <= n; i++) {
	// 	cout << arr[i] << " ";
	// }
	// cout << endl;
	cout << "ans : " << ans << endl;



}