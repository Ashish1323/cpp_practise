#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
using namespace std;

int hexatodeci(string n)
{
    int s = n.size();
    int ans = 0;
    int x = 1;
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
            ans += x * (n[i] - '0');
        else
            ans += x * (n[i] - 'A' + 10);
        x *= 16;
    }
    return ans;
}

int binarytodecimal(int n)
{
    int x = 1;
    int ans = 0;
    while (n != 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int main()
{
    int n = 1101;
    string y = "1CF";
    cout << binarytodecimal(n) << endl;
    cout << hexatodeci(y) << endl;
    char c = '9';
    char d = '0';
    cout << c - d << endl;
}
