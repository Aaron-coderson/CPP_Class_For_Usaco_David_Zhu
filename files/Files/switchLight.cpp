#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>

using namespace std;

int n;
int finall = 1;
const int countt = 100;


vector<pair<int, int>> arr[countt][countt];

int stuffX[] = { -1, 0, 1, 0 };
int stuffY[] = { 0, 1, 0, -1 };



bool checker(int x, int y, int visited[countt][countt]) {

	for (int i = 0; i < 4; i++) {
		int xTempp = x + stuffX[i];
		int yTempp = y + stuffY[i];

		if (xTempp < 0 || yTempp < 0 || xTempp > n - 1 || yTempp > n - 1) {
			continue;
		}

		if (visited[xTempp][yTempp]) {
			return true;
		}
	}

	return false;

}


void floodfill(int x, int y, bool litt[countt][countt]) {
	bool visited[countt][countt];

	if (x < 0 || y < 0 || x > n - 1 || y > n - 1 || visited[x][y] || !litt[x][y]) {
		return;
	}



	if (!checker(x, y) && !(x == 0 && y == 0)) {
		return;
	}


	visited[x][y] = true;


	for (int i = 0; i < 4; i++) {
		floodfill(x + stuffX[i], y + stuffY[i], litt);
	}


	for (int i = 0; i < arr[x][y].size(); i++) {
		int rX = arr[x][y][i].first;
		int rY = arr[x][y][i].second;


		if (!litt[rX][rY]) {
			finall++;
		}


		litt[rX][rY] = true;


		floodfill(rX, rY, litt);
	}
}

int main() {
	freopen("lightson.in", "r", stdin);
	freopen("lightson.out", "w", stdout);

	bool litt[countt][countt];

	int m;
	cin >> n;
	cin >> m;


	for (int i = 0; i < m; i++) {
		int x;
		int y;
		int a;
		int b;
		cin >> x >> y >> a >> b;
		arr[x - 1][y - 1].push_back({ a - 1, b - 1 });
	}


	litt[0][0] = true;


	floodfill(0, 0, litt);

	cout << finall << endl;
}