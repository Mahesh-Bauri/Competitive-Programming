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

	int n;
	cin >> n;
	long long sumA = 0, sumB = 0, sumD = 0;
	long long minA, minB;
	long  a[n];
	long  b[n];
	long  a1[n];
	long  b1[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int j = 0; j < n; j++) {
		cin >> b[j];
	}
	minA = *min_element(a + 0, a + n);
	minB = *min_element(b + 0, b + n);

	for (int i = 0; i < n; i++) {
		a1[i] = a[i] - minA;
		sumA += a1[i];
	}
	for (int j = 0; j < n; j++) {
		b1[j] = b[j] - minB;
		sumB += b1[j];
	}

	for (int i = 0; i < n; i++) {
		if (a1[i] > 0 && b1[i] > 0) {

			if (a1[i] >= b1[i]) {
				sumD += b1[i];
			}
			else {
				sumD += a1[i];
			}
		}
	}
	cout << (sumA + sumB) - sumD << "\n";

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int TC = 1;
	cin >> TC;

	while (TC--) {

		solve();
	}
}