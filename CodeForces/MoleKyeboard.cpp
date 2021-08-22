/******************** Beginning of Template **************************/
/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

/************************************ ALL DEFINE ****************************************************/
#define FORS(i, j, k, step) for (int i=j; i<k; i+=step)
#define FOR(i, j, k) for (int i=j; i<k; i++)
#define RFORS(i, j, k, step) for (int i=j; i>=k; i-=step)
#define RFOR(i, j, k, step) for(int i=j; i>=k; i--)
#define REP(i, k) for(int i = (0); i < (k); i++ )
#define RREP(i, k) for(int i = j; i >= (k); i-- )

#define ALL(cont) cont.begin(), cont.end()
#define RALL(cont) cont.begin(), cont.end()
#define FOREACH(it, l) for(auto it=l.begin(); it != l.end(); it++)
#define mp make_pair
#define pb push_back
#define RESET(a, b) memset(a, b, sizeof(a))
#define INF (int)MAX_INT
#define EPS (int)1e-9
#define PI acos(-1)
#define MOD 1000000007
#define fango using
#define ganteng namespace
#define sekali std

/*********************************Debug DEFINE  ********************************/
#define TESTING
//#define FILE_INPUT
//#define FILE_OUTPUT
/*********************************END of Debug DEFINE  ********************************/

#ifdef TESTING
#define VALUE(x) cout << ">>>> The value of " << #x << " is " << x << "<<<<" << endl
#define NEWLINE cout << "---------------------------------------------" << endl
#define DUMP_STR cout << ">>>>FANGO IS THE MOST HANDSOME MANKIND IN THE ENTIRE WORLD<<<<" << endl;
#define DUMP_CHAR cout << " YO ";
#endif //TESTING_ON_CONSOLE



/************************************ END OF DEFINE ****************************************************/

/************************************ ALL TYPEDEF ****************************************************/
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<piii> viii;
typedef long long int32;
typedef unsigned long long uint32;
typedef long long int int64;
typedef unsigned long long int uint64;



/************************************ ALL DEFINE ****************************************************/

/************************************ END OF PREHEADER ***********************************************/



void solve() {

	char ch;
	cin >> ch;
	string s;
	cin >> s;
	string out = "";
	string k1 = "qwertyuiop";
	string k2 = "asdfghjkl;";
	string k3 = "zxcvbnm,./";

	for (int i = 0; i < s.length(); i++) {

		if (ch == 'R') {

			for (int j = 0; j < k1.length(); j++) {
				if (s[i] == k1[j]) {
					out += k1[j - 1];
				}
			}

			for (int j = 0; j < k2.length(); j++) {
				if (s[i] == k2[j]) {
					out += k2[j - 1];
				}
			}
			for (int j = 0; j < k3.length(); j++) {
				if (s[i] == k3[j]) {
					out += k3[j - 1];
				}
			}


		}
		else {

			for (int j = 0; j < k1.length(); j++) {
				if (s[i] == k1[j]) {
					out += k1[j + 1];
				}
			}

			for (int j = 0; j < k2.length(); j++) {
				if (s[i] == k2[j]) {
					out += k2[j + 1];
				}
			}
			for (int j = 0; j < k3.length(); j++) {
				if (s[i] == k3[j]) {
					out += k3[j + 1];
				}
			}

		}

	}

	cout << out << "\n";
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

	while (TC--) {

		solve();
	}
}