#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//write code hare


	int n;

	cin >> n;
	int count = 1;
	int f = 1;
	int f2 = 1;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}


	for (int j = 0; j < n - 1; j++) {


		if (arr[j] != arr[j + 1]) {
			count++;
		}
		// if (arr[j] % 10 == 0) {

		// 	if (f == 1) {
		// 		count++;
		// 		f = 0;
		// 		f2 = 1;
		// 	}
		// }
		// else if (arr[j] % 10 == 1) {

		// 	if (f2 == 1) {
		// 		count++;
		// 		f = 1;
		// 		f2 = 0;
		// 	}
		// }

	}
	cout << count;
}