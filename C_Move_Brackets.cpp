#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define vll vector<long long>
#define endl "\n"
#define int ll
#define pb push_back


void TheSlothThatCodes()
{
    int n; cin >> n;

    string s; cin >> s;

    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        st.push(s[i]);
    }

    int count = 0;
    stack<char> temp;
    while (st.empty() == false)
    {
        char c = st.top();
        if (c == ')')
        {
            temp.push(c);
            st.pop();
        }
        else
        {
            if (temp.empty() == false)
            {
                temp.pop();
                st.pop();
            }
            else
            {
                count++;
                st.pop();
            }
        }
    }
    
    cout << count << endl;
    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int c; cin >> c;
    while (c--)
    {
        TheSlothThatCodes();
    }
    
    return 0;
}