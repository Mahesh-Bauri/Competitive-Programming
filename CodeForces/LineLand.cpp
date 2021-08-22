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



// ( max(abs(x i - x 0), abs(x i - x n - 1))
// min(abs(x i - x i - 1), abs(x i - x i + 1)

	int n;
	cin >> n;

	int mina[n];
	int maxa[n];
	long long arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);


	for (int i = 0; i < n; i++) {

		if (i > 0 && i < n - 1) {
			mina[i] = min(abs(arr[i] - arr[i + 1]), abs(arr[i] - arr[i - 1]));
		}
		else if (i == 0) {
			mina[i] = abs(arr[i] - arr[i + 1]);
		}
		else if (i == n - 1) {
			mina[i] = abs(arr[i] - arr[i - 1]);
		}

		if (i > 0 && i < n - 1) {
			//maxa[i] = max((abs(arr[i]) + abs(arr[0])), (arr[n - 1] - arr[i]));
			maxa[i] = max(abs(arr[i] - arr[0]), abs(arr[i]  - arr[n - 1]));
		}
		else if (i == 0) {
			//maxa[i] = abs(arr[i]) - abs(arr[n - 1]);
			maxa[i] = abs(arr[i] - arr[n - 1]);
		}
		else if (i == n - 1) {
			//maxa[i] = abs(arr[i]) + abs(arr[0]);
			maxa[i] = (arr[i] - arr[0]) ;
		}


	}

	for (int i = 0; i < n; i++) {

		cout << mina[i] << " " << maxa[i] << "\n";
	}




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