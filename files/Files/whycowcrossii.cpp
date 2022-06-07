
#include<iostream>
#include <vector>
#include <map>
#include <string>
#include <utility>

using namespace std;

const int MAX_N = 1e5;

int aa[MAX_N];
int bb[MAX_N];

int main() {



	freopen("maxcross.in", "r", stdin);
	freopen("maxcross.out", "w", stdout);
	int n, k, b;
	cin >> n >> k >> b;


	for (int i = 0; i < b; i++) {
		int x;
		cin >> x;
		aa[x]++;
	}


	for (int i = 0; i < n; i++) {
		bb[i + 1] = aa[i + 1] + bb[i];
	}

	int finall = INT_MAX;

	for (int i = 0; i <= n - k; i++) {
		finall = min(finall, bb[i + k] - bb[i]);
	}
	cout << finall << endl;
}