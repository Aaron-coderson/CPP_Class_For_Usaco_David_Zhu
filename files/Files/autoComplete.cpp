#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>

using namespace std;

int n, m;
vector<pair<string, int> > listt;

bool checker(string temp, string www) {
	if (temp.size() > www.size())
	{
		return false;
	}

	return www.substr(0, temp.size()) == temp;
}


int main() {
	freopen("auto.in", "r", stdin);
	freopen("auto.out", "w", stdout);
	cin >> n;
	cin >> m;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		listt.push_back(make_pair(s, i));
	}

	sort(listt.begin(), listt.end());

	for (int i = 0; i < m; i++) {
		int k;
		string temp;
		cin >> k;
		cin >> temp;
		k--;
		int pos = lower_bound(listt.begin(), listt.end(), make_pair(temp, 0)) - listt.begin();

		int tompp = pos + k;
		if (tompp < listt.size() && checker(temp, listt[tompp].first)) {
			cout << listt[tompp].second + 1 << endl;
		}
		else {
			cout << -1 << endl;
		}
	}
}