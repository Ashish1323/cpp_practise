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
    int sh = ss;
    string ansa = s.substr(1);
    substring(ansa, ans);
    substring(ansa, ans + ss);
    substring(ansa, ans + to_string(sh));
}

int main()
{
    string s = "AB";
    string sa = "";
    substring(s, sa);
}
