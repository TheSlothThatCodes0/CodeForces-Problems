#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long

void TheSlothThatCodes()
{
    ll len; cin >> len;
    vector<int> lst;

    for (ll i = 0; i < len; i++)
    {
        ll x; cin >> x;
        lst.push_back(x);
    }

    int count = 0;

    for (int i = len-2; i >= 0; i--)
    {
        
        
        while (lst[i] >= lst[i+1] && lst[i] > 0)
        {
            lst[i] /= 2;
            count ++;

        }
        

        if (lst[i] == lst[i+1])
        {
            cout << -1 << endl;
            return;
        }
    }

    cout << count << endl;
    
    
}

int main()
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