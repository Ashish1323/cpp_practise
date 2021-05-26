#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;

void reversed(string s)
{
    if (s.length() == 0)
        return;
    string ss = s.substr(1);
    reversed(ss);
    cout << s[0] << endl;
}

int main()
{
    string s = "madam";
    reversed(s);
}
