#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;

string res = "";

void reversed(string &a, int s, int n)
{
    int slen = a.length();
    if (n == s)
        return;
    // swap(a[s], a[n]);
    res = res + a[n];
    reversed(a, s, n - 1);
}

void reversed2(string &a, int s)
{
    int slen = a.length();
    if (s == slen / 2)
        return;
    swap(a[s], a[slen - s - 1]);
    reversed2(a, s + 1);
}

int main()
{
    string a = "madarchod";
    reversed(a, 0, 9);
    cout << res;
}
