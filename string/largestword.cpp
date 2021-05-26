#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
using namespace std;

int main()
{
    int n = 6;
    string arr = "amita is fucking hot!!";
    int i = 0;
    int j = 0;
    int maxa = 0;
    while (i < arr.length())
    {
        if (arr[i] == ' ')
        {
            j = 0;
            i++;
            continue;
        }
        j++;
        maxa = max(j, maxa);
        i++;
    }
    cout << maxa;
}
