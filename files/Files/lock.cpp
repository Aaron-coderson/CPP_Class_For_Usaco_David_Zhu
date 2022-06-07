/*#include <iostream>


using namespace std;

int N;

bool close(int a, int b)
{
	if (abs(a - b) <= 2)
	{
		return true;
	}
	if (abs(a - b) >= N - 2)
	{
		return true;
	}
	return false;
}

bool check(int n1, int n2, int n3, int c1, int c2, int c3)
{
	return close(n1, c1) && close(n2, c2) && close(n3, c3);
}

int main(void)
{
	int a1, a2, a3;
	int b1, b2, b3;



	freopen("combo.in", "r", stdin);
	freopen("combo.out", "w", stdout);
	cin >> N;
	cin >> a1 >> a2 >> a3;
	cin >> b1 >> b2 >> b3;


	int finall = 0;
	for (int n1 = 1; n1 <= N; n1++)
	{
		for (int n2 = 1; n2 <= N; n2++)
		{
			for (int n3 = 1; n3 <= N; n3++)
			{
				if (check(n1, n2, n3, a1, a2, a3) || check(n1, n2, n3, b1, b2, b3))
				{
					finall++;
				}
			}
		}
	}


	cout << finall << endl;



}*/