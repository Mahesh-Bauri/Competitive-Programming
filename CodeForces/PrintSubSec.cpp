#include<bits/stdc++.h>
#include<iostream>
using namespace std;


// void printSub(string s, string out) {
// 	if (n <= 0) {
// 		cout << out << endl;
// 		return;
// 	}

// 	printSub(s.substr(1), out + s[0]);
// 	printSub(s.substr(1), out);



// }






int binString(int n, vector<string>& out) {

	if (n == 0) {
		out[0] = "";
		return 0;
	}

	int small = binString(n - 1, out);

	for (int i = 0; i < small; i++) {

		out.push_back(out[i]);
	}

	for (int i = 0; i < small; i++) {
		out[i] = "0" + out[i];
	}

	for (int i = small; i < out.size(); i++) {
		out[i] = "1" + out[i];
	}


	return out.size();

}


int main() {


	// printSub("abc", "");
	int n;
	cin >> n;
	vector<string> out;

	int size = binString(n, out);

	for (int i = 0; i < size; i++) {
		cout << out[i] << endl;
	}

	return 0;
}