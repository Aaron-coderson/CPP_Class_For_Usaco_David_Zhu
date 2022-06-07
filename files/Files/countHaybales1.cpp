/*#include <vector>
#include <iostream>

using namespace std;
#include<algorithm>

void ioSetter(string name = "") {
	if (!name.empty()) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

const int maxx = 1e5;
int arr[maxx];


int main() {

	ioSetter("haybales");

	int n = 0;
	int q = 0;
	cin >> n;
	cin >> q;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

	}

	sort(arr, arr + n);
	for (int i = 0; i < q; i++) {
		int a, b;

		cin >> a;
		cin >> b;
		int aaL = lower_bound(arr, arr + n, a) - arr;
		int bbR = upper_bound(arr, arr + n, b) - arr;
		cout << bbR - aaL << endl;
	}

}*/