#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//write code hare



	int t;
	cin >> t;

	while (t-- != 0) {

		int max = -20000000;
		int n, b;
		cin >> n >> b;
		int sum = 0;
		int flag = 0;

		int arr[n][3];

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 3; j++) {
				cin >> arr[i][j];
			}
		}



		for (int i = 0 ; i < n; i++) {
			sum = 0;
			for (int j = 0; j < 1; j++) {
				sum = arr[i][j] * arr[i][j + 1];
				if ((sum > max) && (arr[i][j + 2] <= b)) {
					max = sum;
					flag = 1;

				}
			}
		}

		if (flag == 1) {
			cout << max << endl;
		}
		else {
			cout << "no tablet" << endl;
		}

	}


}