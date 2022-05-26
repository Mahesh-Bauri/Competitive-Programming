/******************** Beginning of Template **************************/
/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

#define IOS  ios_base::sync_with_stdio(0);
#define  CIN  cin.tie(0); cout.tie(0);


// using recursion

int fibo(int n) {

	if (n <= 1) return n;

	return fibo(n - 1) + fibo(n - 2);

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
	cout << ans << endl;

}