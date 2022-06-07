#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>
#include <set>


using namespace std;


int main() {




	int streetC = 0;
	int lightC = 0;

	cin >> streetC >> lightC;


	set<int> lightsA{ 0, streetC };
	multiset<int> distA{ streetC };

	for (int l = 0; l < lightC; l++) {



		int n;

		cin >> n;


		auto a = lightsA.upper_bound(n);
		auto b = a;

		--b;



		distA.erase(distA.find(*a - *b));

		distA.insert(n - *b);

		distA.insert(*a - n);

		lightsA.insert(n);



		auto finall = (distA.end());

		--finall;

		cout << *finall << endl;

	}

}