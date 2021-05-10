#include <iostream>
#include <cmath>
using namespace std;

int fact(int num)
{
    int f = 1;
    for (int i = 2; i <= num; i++)
    {
        f *= i;
    }
    return f;
}

int ncr(int n, int r)
{
    return fact(n) / (fact(n - r) * fact(r));
}

int main()
{
    int n = 5;
    int r = 4;

    cout << ncr(5, 3);
}
