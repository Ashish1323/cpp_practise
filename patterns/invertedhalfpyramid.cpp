#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    // cin >> i;

    for (int j = 0; j < 5; j++)
    {
        for (int k = i - 1; k >= j; k--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
