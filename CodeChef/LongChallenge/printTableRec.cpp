#include<iostream>
using namespace std;

int x = 1;
void printTable(int n) {
	if (x > 10) {
		return;
	}
	cout << n << " * " << x << " = " << (n * x) << endl;
	x++;
	printTable(n);

}


int main() {

	printTable(2);

	return 0;
}