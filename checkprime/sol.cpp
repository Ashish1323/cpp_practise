#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i = 16;
    int x = 0;
    for (int j = 2; j < sqrt(i); j++)
    {
        if (i % j == 0)
        {
            cout << "Not Prime!!" << endl;
            x++;
            break;
        }
    }
    if (x == 0)
        cout << "Prime!!";
}
