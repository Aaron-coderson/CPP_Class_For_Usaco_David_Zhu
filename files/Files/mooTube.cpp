/*#include <vector>
#include <iostream>
using namespace std;

const int INF = 1e9;

vector<pair<int, int>> grapphh[5001];
vector<bool> visited(5001);
int k, v, finall;

void dfs(int v) {
	visited[v] = true;
	for (auto x : grapphh[v]) {
		if (visited[x.first]) continue;
		if (x.second >= k) {
			finall++;
			dfs(x.first);
		}
	}
}

int main() {
	freopen("mootube.in", "r", stdin);
	freopen("mootube.out", "w", stdout);

	int n = 0;
	int q = 0;
	cin >> n;
	cin >> q;

	for (int i = 0; i < n - 1; i++) {
		int a, b, r;
		cin >> a >> b >> r;
		grapphh[a].push_back({ b, r });
		grapphh[b].push_back({ a, r });
	}

	while (q--) {
		cin >> k >> v;
		finall = 0;
		vector<bool> vS(n + 1);
		visited = vS;

		dfs(v);

		cout << finall << endl;
	}
}*/