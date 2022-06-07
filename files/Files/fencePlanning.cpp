/*#include <iostream>
#include <vector>


using namespace std;
const int MAX_N = 100000;

int N;
int M;
typedef pair<int, int> pairrr;
vector<pairrr> C;
vector<int> nbrs[MAX_N];
int moonet[MAX_N];

struct doubll {
	int x1;
	int x2;
	int y1;
	int y2;
};

int  visit(int i, int k, doubll& tomp)
{
	moonet[i] = k;
	tomp.x1 = min(tomp.x1, C[i].first);
	tomp.x2 = max(tomp.x2, C[i].first);
	tomp.y1 = min(tomp.y1, C[i].second);
	tomp.y2 = max(tomp.y2, C[i].second);
	for (int j : nbrs[i])
	{
		if (moonet[j] == 0) visit(j, k, tomp);
	}
}


int main() {
	freopen("fenceplan.in", "r", stdin);
	freopen("fenceplan.out", "w", stdout);

	cin >> N;
	cin >> M;
	pairrr p;

	for (int i = 0; i < N; i++) {
		cin >> p.first >> p.second;
		C.push_back(p);
	}
	for (int i = 0; i < M; i++) {
		cin >> p.first >> p.second;
		nbrs[p.first - 1].push_back(p.second - 1);
		nbrs[p.second - 1].push_back(p.first - 1);
	}
	int K = 0;
	int finall = 999999999;
	for (int i = 0; i < N; i++)
	{
		if (moonet[i] == 0) {
			doubll tomp = { 999999999,0,999999999,0 };
			visit(i, ++K, tomp);
			finall = min(finall, 2 * (tomp.x2 - tomp.x1 + tomp.y2 - tomp.y1));
		}
	}

	cout << finall << endl;


}*/