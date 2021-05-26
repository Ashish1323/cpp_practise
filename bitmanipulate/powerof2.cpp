#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;

bool powerof2(int n)
{
    return (n & (n - 1)) == 0;
}

int main()
{
    cout << powerof2(128) << endl;
}
