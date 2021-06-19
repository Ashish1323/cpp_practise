#include <bits/stdc++.h>
#include <typeinfo>
#include <cmath>
#include <string>
using namespace std;
#define n 100

int prefix(string str)
{
    stack<int> st;
    for (int i = str.length() - 1; i >= 0; i--)
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
    string s = "-+7*45+20";
    cout << prefix(s) << endl;
}
