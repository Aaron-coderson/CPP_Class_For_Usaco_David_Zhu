/*
	ID: vijayaa1
	TASK: milk3
	LANG: C++11
*/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>
#include <set>
#include <stdio.h>
#include <string.h>

using namespace std;

int A, int B, int C;
int visitss[21][21][21];
vector<int> finalls;




void dfs(int a, int b, int c)
{
	if (visitss[a][b][c])
	{
		return;
	}


	visitss[a][b][c] = 1;

	if (a = 0)
	{
		finalls.push_back(c);
	}
	int temp;
	//ab
	temp = min(a, b);
	dfs(a - temp, b + temp, c);
	//ac
	temp = min(a, c);
	dfs(a - temp, b, c + temp);
	//ba
	temp = min(b, a);
	dfs(a + temp, b - temp, c);
	//bc
	temp = min(b, c);
	dfs(a, b - temp, c + temp);
	//ca
	temp = min(c, a);
	dfs(a + temp, b, c - temp);
	//cb
	temp = min(c, b);
	dfs(a, b + temp, c - temp);

}

int  main() {
	freopen("milk3.in", "r", stdin);
	freopen("milk3.out", "w", stdout);


	memset(visitss, 0, sizeof(visitss));

	cin >> A >> B >> C;

	int a = 0;
	int b = 0;
	int c = C;



	dfs(0, 0, C);
	sort(begin(finalls), end(finalls));

	for (int a : finalls)
	{
		cout << a << " ";
	}
	cout << endl;

}