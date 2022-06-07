#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>


using namespace std;


const vector<string> COWS = []() {

	vector<string> tmp{

		"Bessie",

		"Buttercup",

		"Belinda",

		"Betemppprice",

		"Bella",

		"Blue",

		"Betsy",

		"Sue"

	};



	sort(std::begin(tmp), std::end(tmp));

	return tmp;

}();




int main() {

	map<string, int> arrr;

	for (int i = 0; i < COWS.size(); i++) {

		arrr[COWS[i]] = i;

	}



	freopen("lineup.in", "r", stdin);
	freopen("lineup.out", "w", stdout);

	int nn;

	cin >> nn;

	vector<vector<int>> nbor(COWS.size());

	for (int r = 0; r < nn; r++) {

		string temp1;

		string temp2;

		string trash;

		cin >> temp1 >> trash >> trash >> trash >> trash >> temp2;




		int c1 = arrr[temp1];

		int c2 = arrr[temp2];

		nbor[c1].push_back(c2);

		nbor[c2].push_back(c1);

	}


	vector<int> numms;

	vector<bool> addd(COWS.size());

	for (int c = 0; c < COWS.size(); c++) {

		if (!addd[c] && nbor[c].size() <= 1) {

			addd[c] = true;
			numms.push_back(c);


			if (nbor[c].size() == 1) {

				int tompp = c;
				int temppp = nbor[c][0];

				while (nbor[temppp].size() == 2) {

					addd[temppp] = true;

					numms.push_back(temppp);
					int a = nbor[temppp][0];

					int b = nbor[temppp][1];

					int temp_temppp = a == tompp ? b : a;

					tompp = temppp;

					temppp = temp_temppp;

				}

				addd[temppp] = true;

				numms.push_back(temppp);

			}

		}

	}




	for (int finall : numms) {

		cout << COWS[finall] << endl;

	}

}