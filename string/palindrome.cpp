#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
using namespace std;

int main()
{
    int n = 6;
    char arr[n] = "amita";
    int i = 0;
    int j = n - 2;
    int flag = 0;
    while (i <= j)
    {
        if (arr[i] != arr[j])
        {
            cout << "Not Palindrome!!";
            flag = 1;
            break;
        }
        i++;
        j--;
    }
    if (flag != 1)
        cout << "Palindrome!!";
}
