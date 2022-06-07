/*#include <vector>
#include <iostream>

using namespace std;

#define maxNum 100005

int n;
vector<int> adj[maxNum];
int thiss;
int parent;

int dfs(int thiss, int parent) {
	int ans = 0;
	int cows = adj[thiss].size();
	if (parent == -1) {
		cows++;
	}

	int infected = 1;
	int days = 0;


	while (infected < cows) {
		days++;
		infected *= 2;
	}

	ans += days;

	for (auto next : adj[thiss]) {
		if (next != parent) {
			ans += dfs(next, thiss) + 1;
		}
	}
	return ans;
}
int dfsIter() {
	int ans = 0;
	for (auto next : adj[100004]) {
		if (next != parent) {
		 
				+= dfs(next, thiss) + 1;
		}
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		a--; b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	cout << dfs(0, -1) << endl;
	return 0;
}*/