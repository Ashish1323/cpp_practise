#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int l = 5;

    for (int j = 1; j <= i; j++)
    {
        for (int k = 1; k <= l; k++)
        {
            if (j == 1 || j == i || k == 1 || k == l)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// output

// * * * * *
// *       *
// *       *
// *       *
// * * * * *