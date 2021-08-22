#include<iostream>
using namespace std;



int  reverse(int n) {


	if (n < 10) {
		return n;
	}


	int rev = 0;
	rev = (rev * 10) + (n % 10);
	return  (rev * 10) + reverse(n / 10);


}






int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int n;
	cin >> n;
	cout << reverse(n);
	// if (reverse(n) == n) {
	// 	cout << "Palindrome"<<;
	// }
	// else {
	// 	cout << "Not Palindrome";
	// }




}