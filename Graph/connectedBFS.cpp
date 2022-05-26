/******************** Beginning of Template **************************/
/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

#define IOS  ios_base::sync_with_stdio(0);
#define  CIN  cin.tie(0); cout.tie(0);
#define endl  "\n";


void bsf(vector<vector<int>>graph, int size)
{
	bool visit[size] = {0};

	visit[0] = 1;
	queue<int>q;
	q.push(0);
	//int ind = 0;
	while (!q.empty())
	{

		int d = q.front();
		cout << d << endl;

		q.pop();
		for (auto i : graph[d]) {
			if (visit[i] == 0)
			{
				q.push(i);
				visit[i] = 1;
			}

		}

	}
}

















int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	IOS
	CIN


	/************************* Start Code Here ******************/

	int v;
	cin >> v;
	vector<vector<int>> graph(v);
	int edges;
	cin >> edges;
	while (edges--)
	{
		int vex;
		int ege;
		cin >> vex >> ege;
		graph[vex].push_back(ege);
		graph[ege].push_back(vex);

	}

	bsf(graph, v);


}