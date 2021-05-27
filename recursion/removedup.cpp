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
    if (ans[0] == ss)
        return ans;
    else
        return ss + ans;
}

int main()
{
    string s = "aaaaaaaaaaaabbbbbbaaaabbbbbbcccaaacccccccccccdddddddddddd";
    cout << replacepi(s);
}
