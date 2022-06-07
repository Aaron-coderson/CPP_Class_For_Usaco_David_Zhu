/*
	ID: vijayaa1
	TASK: milk3
	LANG: C++
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
#include <fstream>

using namespace std;

int R;
int arr[1000][1000] = { -1 };
vector<int> results;


void go(int prog[])//recur
{
	if (prog[R - 1] != -1)
	{
		int tomp = 0;
		for (int i = 0; i < R; i++)
		{
			tomp += prog[i];
		}
		results.push_back(tomp);
		return;
	}
	//left
	/
		//right

}


int main()
{
	freopen("numtri.in", "r", stdin);
	freopen("numtri.out", "w", stdout);
	cin >> R;

	for (int i = 1; i <= R; i++)
	{

		for (int j = 1; j <= i; j++)
		{
			int temp = 0;
			cin >> temp;
			arr[i - 1][j - 1] = temp;
		}
	}



}