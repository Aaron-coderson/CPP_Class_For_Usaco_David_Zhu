#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>>
#include <map>
#include <utility>
#include <set>

#define maxx 1000

int afters[maxx + 1];
int results[maxx + 1];

int main(void)
{
	int finall;
	int i;
	int j;
	int N;

	freopen("relay.in", "r", stdin);
	freopen("relay.out", "w", stdout);

	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		scanf("%d", &afters[i]);
		if (afters[i] == 0)
		{
			results[i] = 1;
		}
	}

	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= N; j++)
		{
			if (results[afters[j]])
			{
				results[j] = 1;
			}
		}
	}





	for (i = 1; i <= N; i++)
	{
		finall += results[i];
	}

	printf("%d\n", finall);

}