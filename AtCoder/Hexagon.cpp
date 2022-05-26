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

void printF(int n) {
	for (int i = 1; i <= n; i++) {
		cout << "-";
	}
}


void printHexagon(int n) {

	if (n < 2) {
		return;
	}

	printRow(n);

	cout << "+";
	printF((n - 1) * 3);
	cout << "+" << endl;

	for (int i = 2; i <= n; i++) {
		printRow(n - i + 1);
		cout << "/";
		printRow(((n - 1) * 3) + (2 * i) - 2);
		cout << "\\" << endl;
	}
	cout << "+";
	printRow(((n - 1) * 3) + (2 * n));
	cout << "+" << endl;

	for (int i = n; i >= 2; i--) {
		printRow(n - i + 1);
		cout << "\\";
		printRow(((n - 1) * 3) + (2 * i) - 2);
		cout << "/" << endl;
	}

	printRow(n);
	cout << "+";
	printF((n - 1) * 3);
	cout << "+" << endl;


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

	printHexagon(n);


}