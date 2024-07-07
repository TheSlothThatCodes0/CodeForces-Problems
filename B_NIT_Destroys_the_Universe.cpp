#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define vll vector<long long>
#define endl "\n"
#define int ll

void TheSlothThatCodes()
{
    ll len; cin >> len; 
    vll lst; 

    for (ll i = 0; i < len; i++)
    {
        int x; cin >> x;
        lst.push_back(x);
    }

    if (len == 1)
    {
        if (lst[0] == 0)
        {
            cout << 0 <<endl;
            return;
        }

        cout << 1 << endl;
        return;
        
    }
    
    ll count;
    
    if (lst[0] == 1)
    {
        count = 1;
    }
    else
    {
        count = 0;
    }
    
    for (ll i = 0; i < len-1; i++)
    {
        if (lst[i] ==0 && lst[i+1] != 0)
        {
            count++;
        }
        
    }

    if (count < 2)
    {
        cout << count << endl;
        return;
    }

    cout << 2 << endl;
    return;
    
    

    
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