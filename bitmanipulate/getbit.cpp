#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;

int get(int num, int pos)
{
    return (num & (1 << pos)) != 0;
}

int seta(int num, int pos)
{
    return (num | (1 << pos));
}

int clear(int num, int pos)
{
    return (num & ~(1 << pos));
}

int main()
{
    cout << clear(8, 3) << endl;
}
