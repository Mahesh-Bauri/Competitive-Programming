/******************** Beginning of Template **************************/
/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

#define IOS  ios_base::sync_with_stdio(0);
#define  CIN  cin.tie(0); cout.tie(0);


void printRow(int n) {
	for (int i = 1; i <= n; i++) {
		cout << " ";
	}
}

void printRight(int n) {

	cout << "+" << endl;
	if (n == 1) return;
	for (int i = 2; i <= n - 1; i++) {
		cout << "|";
		printRow((2 * i) - 1 - 2);
		cout << "\\" << endl;
	}

	cout << "+";
	for (int i = 2; i <= (2 * n) - 1 - 2; i++) {
		cout << "-";
	}
	cout << "+";
}




int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	IOS
	CIN
	int n;
	cin >> n;
	printRight(n);


	/************************* Start Code Here ******************/






}