#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i = 153;
    int x = 0;
    int y;
    int aa = i;
    while (i != 0)
    {
        y = i % 10;
        x = x + y * y * y;
        i /= 10;
    }
    if (x == aa)
        cout << "Armstrong!!";

    else
        cout << "Not Armstrong!!";
}
