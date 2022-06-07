/*
ID: vijayaa1
LANG: C++
TASK: wormhole
*/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>
#include <set>


using namespace std;


#define MAX_N 12

int N, X[MAX_N + 1], Y[MAX_N + 1];
int partner[MAX_N + 1];
int secondds[MAX_N + 1];

bool checker(void)
{
	for (int i = 1; i <= N; i++) {

		int temp = i;
		for (int j = 0; j < N; j++)
			temp = secondds[partner[temp]];
		if (temp != 0)
		{
			return true;
		}
	}
	return false;
}


int doo(void)
{

	int i;
	int finall = 0;
	for (i = 1; i <= N; i++)
		if (partner[i] == 0) break;


	if (i > N) {
		if (checker()) return 1;
		else return 0;
	}


	for (int j = i + 1; j <= N; j++)
		if (partner[j] == 0) {

			partner[i] = j;
			partner[j] = i;
			finall += doo();
			partner[i] = partner[j] = 0;
		}

	return finall;
}

int main(void)
{

	freopen("wormhole.in", "r", stdin);
	freopen("wormhole.out", "w", stdout);

	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> X[i] >> Y[i];
	}


	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (X[j] > X[i] && Y[i] == Y[j])
			{
				if (secondds[i] == 0 ||
					X[j] - X[i] < X[secondds[i]] - X[i])
				{
					secondds[i] = j;
				}
			}
		}
	}

	cout << doo() << endl;

	return 0;
}