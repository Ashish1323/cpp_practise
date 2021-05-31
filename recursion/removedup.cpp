#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;

string removedup(string s)
{
    if (s.length() == 0)
        return "";
    char ss = s[0];
    string ans = removedup(s.substr(1));
    if (ans[0] == ss)
        return ans;
    else
        return ss + ans;
}

int main()
{
    string s = "aaaaaaaaaaaabbbbbbbbbbbbccccccccccccccdddddddddddd";
    cout << removedup(s);
}
