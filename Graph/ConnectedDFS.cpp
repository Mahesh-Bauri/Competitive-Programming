/******************** Beginning of Template **************************/
/************ ALL HEADER FILE ***********/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

#define IOS  ios_base::sync_with_stdio(0);
#define  CIN  cin.tie(0); cout.tie(0);
#define endl  "\n";


void dfs(vector<vector<int>>graph, int size, bool visit[], int src)
{

	visit[src] = 1;

	cout << src << endl;

	for (auto i : graph[src]) {
		if (visit[i] == 0)
		{
			dfs(graph, size, visit, i);
		}

	}

}


// void source(vector<vector<int>>v, int size)
// {
// 	bool visit[size] = {0};
// 	for (int i = 0; i < size; i++)
// 	{
// 		if (visit[i] == 0)
// 		{
// 			bfs(v, i, visit);
// 		}

// 	}
// }















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
	bool visit[v] = {0};
	dfs(graph, v, visit, 0);
	//source(graph, v,);



}