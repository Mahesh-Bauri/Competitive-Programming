/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
// #include<string.h>
using namespace std;



void solve() {

	string s;
	cin >> s;
	string hello = "hello";//ello
	int e = 5;
	int len = s.size();
	for (int j = 0; j < len; j++)
	{
		if (s[j] == hello[0] and e)//hhlllllooo
		{
			e--;
			hello.erase(hello.begin());
			if (e == 0) {cout << "YES" << endl; break;}
		}
	}
	if (e)cout << "NO" << endl;


}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int TC = 1;
	//cin >> TC;

	while (TC) {

		solve();
		TC--;
	}
}