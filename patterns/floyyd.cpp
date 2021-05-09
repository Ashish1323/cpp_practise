#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    // cin >> i;
    int f = 1;

    for (int j = 1; j <= i; j++)
    {
        for (int k = 1; k <= j; k++)
        {
            cout << f << " ";
            f++;
        }
        cout << endl;
    }
}

// output

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15