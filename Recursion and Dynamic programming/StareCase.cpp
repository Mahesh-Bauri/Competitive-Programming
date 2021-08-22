/******************** Beginning of Template **************************/
/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

#define IOS  ios_base::sync_with_stdio(0);
#define  CIN  cin.tie(0); cout.tie(0);


int countNo(int n) {
	int memo = new int[n + 1];
	arrays.fill(memo, -1);

	return countWays(n, memo);



}




int countWays(int n, int memo[]) {

	if (n < 0) {
		return 0;
	}
	else if (n == 0) {
		return 1;
	} else if (memo[n] != -1) {
		return memo[n];
	}
	else {
		memo[n] = countWays(n - 1, memo) + countWays(n - 2, memo) + countWays(n - 3, memo);
		return memo[n];
	}


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


	cout << countNo(n);



}