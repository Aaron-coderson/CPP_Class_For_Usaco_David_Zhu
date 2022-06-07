/*#include <vector>
#include <iostream>

using namespace std;


void func(int n, char r1, char r2, char r3)
{
	if (n == 0)
	{
		return;
	}
	func(n - 1, r1, r3, r2);

	cout << "disk " << n << " - rod " << r1 <<
		" to rod " << r2 << endl;

	func(n - 1, r3, r2, r1);
}


int main() {

	int n = 0;

	cin >> n;

	func(n, 'a', 'b',  'c');

	


}*/