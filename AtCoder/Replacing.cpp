#include<iostream>
#include<algorithm>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int n;
	cin >> n;

	int arr[n];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int j = 0; j < n; j++) {
		sum = sum + arr[j];
	}

	int q; cin >> q;

	for (int j = 0; j < q; j++) {

		int bi, ci;
		cin >> bi >> ci;

		if (binary_search(arr, arr + n, bi)) {
			sum = (sum + ci) - bi;
		}




		cout << sum << endl;
	}


}