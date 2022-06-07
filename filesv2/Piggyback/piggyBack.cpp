#include <deque>
#include <climits>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>
#include <set>
#include <stdio.h>
#include <string.h>
#include <queue>
#include <fstream>

using namespace std;
typedef long long ll;
vector<vector<ll> > arr;
ll b;
ll e;
ll p;
ll n;
ll m;

vector<int> dooo(int start) {
	vector <int> vv;
	vv.resize(n + 1, 0);
	deque<int> qqq;
	qqq.push_back(start);
	vector<int> finall;
	finall.resize(n + 1, 0);

	while (qqq.size() > 0) {
		int q = qqq.front();
		qqq.pop_front();
		if (!(vv[q])) {
			vv[q] = 1;
		}

		for (int i; i < arr[q].size(); i++) {
			if (!(vv[arr[q][i]]) && find(qqq.begin(), qqq.end(), arr[q][i]) == qqq.end()) {
				qqq.push_back(arr[q][i]);
				finall[arr[q][i]] = finall[q] + 1;
			}
		}
	}
	return finall;
}


int main() {
	freopen("piggyback.in", "r", stdin);
	freopen("piggyback.out", "w", stdout);


	cin >> b;
	cin >> e;
	cin >> p;
	cin >> n;
	cin >> m;
	arr.resize(n + 1);
	for (int i = 0; i < m; i++) {
		int temp1;
		int temp2;

		cin >> temp1;
		cin >> temp2;
		arr[temp1].push_back(temp2);
		arr[temp2].push_back(temp1);
	}
	vector <int> ress1 = dooo(1);
	vector <int> ress2 = dooo(2);
	vector <int> ress3 = dooo(n);
	ll finall = LLONG_MAX;


	for (int i = 1; i < n + 1; i++) {
		ll tomp = ress1[i] * b + ress2[i] * e + ress3[i] * p;
		if (finall > tomp) {
			finall = tomp;
		}
	}
	cout << finall << endl;


}