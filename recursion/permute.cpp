#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;

void knapsack(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        string ros = s.substr(0, i) + s.substr(i + 1);
        knapsack(ros, ans + c);
    }
}

int main()
{
    knapsack("ABC", "");
}
