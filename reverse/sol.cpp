#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i = 69;
    int x = 0;
    int y;
    while (i != 0)
    {
        y = i % 10;
        x = x * 10 + y;
        i /= 10;
    }
    cout << x;
}
