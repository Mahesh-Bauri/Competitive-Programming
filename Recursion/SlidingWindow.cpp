/******************** Beginning of Template **************************/
/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

vector<double> findAverages(int k, vector<int>& arr) {

	int n = arr.size();

	vector<double> ans(n - k + 1);

	int sum = 0;
	int w_start = 0;

	for (int w_end = 0; w_end < n; w_end++) {

		sum += arr[w_end];

		if (w_end >= (k - 1)) {
			ans[w_start] = sum / (double) k;
			sum -= arr[w_start];
			w_start++;
		}


	}
	return ans;
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