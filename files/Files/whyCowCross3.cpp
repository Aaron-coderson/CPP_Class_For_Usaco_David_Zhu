#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>
#include <set>


using namespace std;

const int countt = 1e2;

bool arr[countt][countt];
int cows[countt][countt], di[4] = { 1, -1, 0, 0 }, dj[4] = { 0, 0, 1, -1 }, nCows, n, k, r;
set<tuple<int, int, int, int>> listt;

int aaa(int i, int j, int i1, int j1) {
	if (i < 0 || j < 0 || i >= n || j >= n || arr[i][j] || listt.count(tie(i, j, i1, j1))) return;

	arr[i][j] = true;
	nCows += cows[i][j];

	for (int k = 0; k < 4; k++) {
		aaa(i + di[k], j + dj[k], i, j);
	}
}

int main() {
	freopen("countcross.in", "r", stdin);
	freopen("countcross.out", "w", stdout);

	cin >> n;
	cin >> k;
	cin >> r;

	for (int i = 0; i < r; i++) {
		int x1, y1, x2, y2;
		cin >> x1;
		cin >> y1;
		cin >> x2;
		cin >> y2;
		x1--; y1--; x2--; y2--;


		tuple<int, int, int, int> cur = tie(y1, x1, y2, x2);
		tuple<int, int, int, int> cur1 = tie(y2, x2, y1, x1);
		listt.insert(cur);
		listt.insert(cur1);
	}

	for (int i = 0; i < k; i++) {
		int x, y;
		cin >> x >> y;
		x--; y--;
		cows[y][x]++;
	}

	vector<int> results;
	int totalCows = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j]) continue;
			nCows = 0;
			aaa(i, j, -1, -1);
			totalCows += nCows;
			if (nCows) results.push_back(nCows);
		}
	}

	int finall = 0;

	for (int i = 0; i < (int)results.size(); i++) {
		for (int j = i + 1; j < (int)results.size(); j++) {
			finall += results[i] * results[j];
		}
	}

	cout << finall << '\n';
}
