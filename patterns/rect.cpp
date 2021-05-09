#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Enter a number" << endl;
    // cin >> i;

    for (int j = 0; j < 5; j++)
    {
        for (int k = 0; k < 5; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// output

// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *