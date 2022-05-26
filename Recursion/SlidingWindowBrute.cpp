/******************** Beginning of Template **************************/
/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

vector<double> findAverages(int K, vector<int>& arr) {
	vector<double> result(arr.size() - K + 1);
	for (int i = 0; i <= arr.size() - K; i++) {
		// find sum of next 'K' elements
		double sum = 0;
		for (int j = i; j < i + K; j++)
			sum += arr[j];
		result[i] = sum / K; // calculate average
	}

	return result;
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif




	/************************* Start Code Here ******************/

	vector<int> v = {1, 3, 2, 6, -1, 4, 1, 8, 2};

	vector<double> ans = findAverages(5, v);

	for (auto x : ans) {
		cout << x << ", ";
	}


}