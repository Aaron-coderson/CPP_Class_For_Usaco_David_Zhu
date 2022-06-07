#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <utility>

using namespace std;


int main()
{

	freopen("wormhole.in", "r", stdin);
	freopen("wormhole.out", "w", stdout);

	int n = 0;
	cin >> n;

	vector<pair<int, int>> arr;

	for (int i = 0; i < n; i++)
	{
		int t1;
		int t2;
		cin >> t1 >> t2;

		pair<int, int> temp;
		temp.first = t1;
		temp.second = t2;

		arr.push_back(temp);

	}


}