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
	int result = 0;
	int win = false;
	int countX = 0;
	int countO = 0;
	string board, board1, board2, board3;
	cin >> board1 >> board2 >> board3;

	board = board1 + board2 + board3;

	for (int i = 0; i < board.size(); i++) {
		if (board[i] == 'X') {
			countX++;
		}

		if (board[i] == 'O') {
			countO++;
		}
	}


	if (((board[0] == 'X' && board[1] == 'X' && board[2] == 'X') ||
	        (board[3] == 'X' && board[4] == 'X' && board[5] == 'X') ||
	        (board[6] == 'X' && board[7] == 'X' && board[8] == 'X') ||
	        (board[0] == 'X' && board[3] == 'X' && board[6] == 'X') ||
	        (board[1] == 'X' && board[4] == 'X' && board[7] == 'X') ||
	        (board[2] == 'X' && board[5] == 'X' && board[8] == 'X') ||
	        (board[2] == 'X' && board[4] == 'X' && board[6] == 'X') ||
	        (board[0] == 'X' && board[4] == 'X' && board[8] == 'X')) ||

	        ((board[0] == 'O' && board[1] == 'O' && board[2] == 'O') ||
	         (board[3] == 'O' && board[4] == 'O' && board[5] == 'O') ||
	         (board[6] == 'O' && board[7] == 'O' && board[8] == 'O') ||
	         (board[0] == 'O' && board[3] == 'O' && board[6] == 'O') ||
	         (board[1] == 'O' && board[4] == 'O' && board[7] == 'O') ||
	         (board[2] == 'O' && board[5] == 'O' && board[8] == 'O') ||
	         (board[2] == 'O' && board[4] == 'O' && board[6] == 'O') ||
	         (board[0] == 'O' && board[4] == 'O' && board[8] == 'O'))) {

		win = true;
	}


	if ((win == false && (countO + countX) == 9) || (win == true)) {
		result = 1;
	}
	if ((win == true && abs(countX - countO) != 1) || (win == false && (countX < countO)) ) {
		result = 3;
	}

	if (win == false && result == 0) {
		result = 2;
	}




	cout << result << endl;


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