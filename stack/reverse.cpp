#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;
#define n 100
stack<string> st;

void reverse(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        for (; s[i] != ' ' && i < s.length();)
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    string s = "Yo!!!!!!!! What is Up.";
    reverse(s);
}
