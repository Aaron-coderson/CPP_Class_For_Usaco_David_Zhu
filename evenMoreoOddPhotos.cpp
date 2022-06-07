#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{

    // YOUR CODE GOES HERE!

    std::cout << "Hello World!\n";
    cout << "How many transactions have you had in the past month?: ";
    int a = 0;
    cin >> a;
    cout << endl;
    int b[a];

    for (int i = 0; i < a; i++)
    {
        cout << "State next transaction. Use '-' for withdrawel and no sign for deposit: ";
        int c = 0;
        cin >> c;
        b[i] = c;
    }
    int finall = sum(b, a);
    cout << finall;
}