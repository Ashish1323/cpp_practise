#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    string arr = "amita is fucking hot!!";
    string upper = arr;
    string lower = arr;
    for (int i = 0; i < arr.length(); i++)
    {
        upper[i] = toupper(arr[i]);
        lower[i] = tolower(arr[i]);
    }
    cout << lower << endl;
    cout << upper;

}
