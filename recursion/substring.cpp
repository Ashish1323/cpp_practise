#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;

void substring(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ss = s[0];
    string ansa = s.substr(1);
    substring(ansa, ans);
    substring(ansa, ans + ss);
}

int main()
{
    string s = "ABC";
    string sa = "";
    substring(s, sa);
}
