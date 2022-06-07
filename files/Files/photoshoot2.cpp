/*#include <iostream>

using namespace std;


int main() {
	int n = 0;

	cin >> n;


	int* a;
	int* b;
	a = new int[n];
	b = new int[n];

	for (int i = 0; i < n; i++)
	{
		int aa = 0;
		cin >> aa;
		a[i] = aa;

	}
	for (int i = 0; i < n; i++)
	{
		int bb = 0;
		cin >> bb;
		b[i] = bb;

	}


	int finall = 0;

	int* change;
	change = new int[n + 1];

	int k = 0;

	for (int j = 0; j < n; j++) {
		while (change[a[k]]) {
			k++;
		}
		if (b[j] == a[k]) {
			k++;
		}
		else {
			finall++;
			change[b[j]] = 1;
		}
	}
	cout << finall;





}*/