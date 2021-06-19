#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;
#define n 100

int postfix(string str)
{
    stack<int> st;
    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]))
        {
            st.push(str[i] - '0');
        }
        else
        {
            int one = st.top();
            st.pop();
            int two = st.top();
            st.pop();
            if (str[i] == '+')
                st.push(one + two);
            if (str[i] == '-')
                st.push(one - two);
            if (str[i] == '*')
                st.push(one * two);
            if (str[i] == '/')
                st.push(one / two);
        }
    }
    return st.top();
}

int main()
{
    string s = "46+2/5*7+";
    cout << postfix(s) << endl;
}
