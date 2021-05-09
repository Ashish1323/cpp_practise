// Your First C++ Program

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        int x;
        for (x = 2; x < i; x++)
        {
            if (i % x == 0)
                break;
        }
        if (x == i)
        {
            cout << x << endl;
        }
    }
}