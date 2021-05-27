#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;

string replacepi(string s)
{
    if (s.length() == 0)
        return "";
    char ss = s[0];
    string ans = replacepi(s.substr(1));
    if (ss == 'x')
        return ans + ss;
    else
        return ss + ans;
}

int main()
{
    string s = "asdbadxbabdaxbasdxxxbasdadxxxx";
    cout << replacepi(s);
}
