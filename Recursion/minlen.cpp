#include<iostream>
#include<cctype>
#include<string.h>
using namespace std;
void minLengthWord(char input[], string output);
char getString(char input[], int index);
int length(char input[], int si, int ei);

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	char arr[10000];
	cin >> arr;

	string out;

	minLengthWord(arr, out);

	// for (int i = 0; out[i] != '\0'; i++) {
	// 	cout << out[i];
	// }

//write code hare

}



void minLengthWord(char input[], char output[]) {
	int prev = -1;

	int i = 0;
	int minLength = 0, len = 0;
	int si, ei;
	for (; input[i] != '\0'; i++) {
		if (input[i] == ' ') {
			int len = length(input, prev + 1, i - 1);
			if (len > minLength) {
				minLength = len;
				si = prev + 1;
				ei = i - 1;
			}
			prev = i;
		}

	}

	if (len > minLength) {
		minLength = len;
		si = prev + 1;
		ei = i - 1;
	}
	for (int i = 0; i < minLength; i++) {
		output[i] = getString(input, si + i);
	}

	for (int i = 0; output[i] != '\0'; i++) {
		cout << output[i];
	}

}

int length(char input[], int si, int ei) {
	int len = 0;
	for (int i = si; i <= ei; i++) {
		len++;
	}
	return len;

}

char getString(char input[], int index) {
	return input[index];
}