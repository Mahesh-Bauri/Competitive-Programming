#include<bits/stdc++.h>
using namespace std;
int main() {

	int x = 31;
	int i = 5;

	int z = (x & (1 << 2));

	if (z == 0) {
		cout << "Unset" << endl;
	} else {
		cout << "Set" << endl;
	}


}