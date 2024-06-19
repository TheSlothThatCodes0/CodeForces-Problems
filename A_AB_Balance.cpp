#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void solve()
{
    string s; cin >> s;

    ll count_ab = 0, count_ba = 0;

    for (ll i = 0; i < s.size()-1; i++)
    {
        if (s[i] == 'a' && s[i+1] == 'b')
        {
            count_ab++;
        }

        if (s[i] == 'b' && s[i+1] == 'a')
        {
            count_ba++;
        }
        
    }
    
    ll x = count_ab - count_ba; 
    // cout << x << " ";

    if (count_ab > count_ba)
    {
        while (x)
        {
            for (ll i = 0; i < s.size()-1; i++)
            {
                if (s[i] == 'a' && s[i+1] == 'b')
                {
                    s[i] = 'b';
                    x--;
                    break;
                }
            }
            
        }
    }

    else
    {
        while (x)
        {
            for (ll i = 0; i < s.size()-1; i++)
            {
                if (s[i] == 'b' && s[i+1] == 'a')
                {
                    s[i] = 'b';
                    x--;
                    break;
                }
            }
        }
    }
    
    cout << s << endl;
    
    
    
    
}

void solve_2()
{
    string s; cin >> s;

    if (s[0] == s[s.size()-1])
    {
        cout << s << endl;
        return;
    }

    s[0] = 'a'; s[s.size()-1] = 'a';

    cout << s << endl;
    

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int c; cin >> c;
    while (c--)
    {
        solve_2();
    }
    
    return 0;
}