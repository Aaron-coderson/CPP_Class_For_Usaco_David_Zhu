#include <iostream>
#include <map>
#include <string>

using namespace std;

string listt[12] = { "Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat" };

map<string, int> animall;

string getYear(int year)
{
	int a = 0;
	int y = 2021;
	while (y < year) { y++; a++; if (a == 12) a = 0; }
	while (y > year) { y--; a--; if (a == -1) a = 11; }
	return listt[a];
}

int main(void)
{
	int N;
	animall["Bessie"] = 2021;
	cin >> N;



	string cowa, born, in, relation, animal, year, from, cowb;
	for (int i = 0; i < N; i++) {
		cin >> cowa >> born >> in >> relation >> animal >> year >> from >> cowb;
		animall[cowa] = animall[cowb];


		do {
			if (relation == "previous")
			{
				animall[cowa]--;
			}
			else {
				animall[cowa]++;
			}
		} while (getYear(animall[cowa]) != animal);
	}


	int finall = animall["Bessie"] - animall["Elsie"];

	if (finall < 0)
	{
		finall = -finall;
	}
	cout << finall << endl;



}