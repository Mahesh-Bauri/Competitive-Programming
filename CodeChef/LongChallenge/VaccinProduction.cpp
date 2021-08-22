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

	int d1, v1, d2, v2, p;

	cin >> d1 >> v1 >> d2 >> v2 >> p;


	int countDays = 0;
	int leftv = 0;
	int tv = 0;
	int count = 0;
	if (d1 == 1 && d2 == 1) {
		int tvac = v1 + v2;
		if (p % tvac == 0) {
			countDays = p / tvac;
		}
		else {
			countDays = (p / tvac) + 1;
		}

	} else if (d1 == d2 ) {

		tv = v1 + v2;

		if (p / tv != 0) {
			countDays = (d1 - 1) + (p / tv) + 1;
		}
		else {
			countDays = (d1 - 1) + (p / tv);
		}



	}
	else if (d1 != 1 && d2 != 1)  {


		if (d1 < d2) {
			countDays = (d1 - 1) + (d2 - d1);
			leftv = p - ((d2 - d1) * v1);
		}
		else {
			countDays = (d2 - 1) + (d1 - d2);
			leftv = p - ((d1 - d2) * v2);
		}

		tv = v1 + v2;

		count = leftv / tv;

		countDays += count;
	}
	else {


		if (d1 < d2) {
			countDays =  (d2 - d1);
			leftv = p - ((d2 - d1) * v1);
		}
		else {
			countDays =  (d1 - d2);
			leftv = p - ((d1 - d2) * v2);
		}

		tv = v1 + v2;

		if (leftv % tv == 0) {
			count = leftv / tv;
		}
		else {
			count = (leftv / tv) + 1;
		}


		countDays += count;


	}

	cout << countDays;


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