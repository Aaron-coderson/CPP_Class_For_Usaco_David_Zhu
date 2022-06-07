#include <vector>
#include <iostream>

using namespace std;

bool conectedd[200][200];

vector<bool> visited;
int n;

int dfs(int v) {
	visited[v] = true;
	int cows = 0;

	for (int j = 0; j < n; j++) {
		if (visited[j] || !conectedd[v][j]) continue;
		visited[j] = true;
		cows += dfs(j) + 1;
	}
	return cows;
}

int main() {

	freopen("moocast.in", "r", stdin);
	freopen("moocast.out", "w", stdout);

	cin >> n;
	vector<int> x(n), y(n), p(n);

	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i] >> p[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int sD = (x[i] - x[j]) * (x[i] - x[j])
				+ (y[i] - y[j]) * (y[i] - y[j]);
			int abc = p[i] * p[i];
			if (sD <= abc)
			{
				conectedd[i][j] = true;
			}
		}
	}

	int finall = 0;

	for (int i = 0; i < n; i++) {
		visited.assign(n, false);
		int tompp = dfs(i) + 1;
		finall = max(finall, tompp);
	}

	cout << finall << endl;
}