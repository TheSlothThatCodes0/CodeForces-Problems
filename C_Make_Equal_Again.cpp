#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void solve()
{
    ll len; cin >> len; 
    vector<int> v;
    for (ll i = 0; i < len; i++)
    {
        ll x; cin >> x;
        v.push_back(x);
    }

    ll i = 0, j = len-1;
    bool trigger_l = true, trigger_r = true, break_trigger = false;

    if (v[i] != v[j] && ((v[i] != v[i+1]) && (v[j] != v[j-1])))
    {
        cout << len - 1 << endl;
        return;
    }

    else if (v[i] != v[j] && (v[i] == v[i+1]))
    {
        for (int k = 0; k < len; k++)
        {
            if (v[i] != v[k])
            {
                cout << j - k + 1 << endl;
                return;
            }
            
        }
        
    }

    else if (v[i] != v[j] && (v[j] == v[j-1]))
    {
        for (int k = 0; k < len; k++)
        {
            if (v[j] != v[j-k])
            {
                cout << j - k + 1 << endl;
                return;
            }
            
        }
        
    }
    
    else if (v[i] == v[j])
    {
        while (i < j)
        {
            if (v[i+1] == v[j-1])
            {
                i++;
                j--;
            }

            else
            {
                break;
            }
            
            
        }

        if (i == j)
        {
            cout << 0 << endl;
            return;
        }
        
        cout << j - i - 1 << endl;
        return;
        
    }
    
    // cout << "-" << endl;
    
    
    
    
    
}

void solve_2()
{
    ll len; cin >> len; 
    vector<int> v;
    for (ll i = 0; i < len; i++)
    {
        ll x; cin >> x;
        v.push_back(x);
    }

    ll l_same = 0, r_same = 0;
    for (ll i = 0; i < len-1; i++)
    {
        if (v[i] == v[i+1])
        {
            l_same++;
        }
        else
        {
            break;
        }
        
    }

    for (ll i = len-1; i >= 0; i--)
    {
        if (v[i] == v[i-1])
        {
            r_same++;
        }
        else
        {
            break;
        }
        
    }

    if (l_same == r_same && l_same == len-1)
    {
        cout << 0 << endl;
        return;
    }
    // cout << l_same << " " << r_same << " ";
    if (v[0] == v[len-1])
    {
        cout << len - l_same - r_same - 2 << endl;
        return;
    }

    else
    {
        cout << len - max(l_same,r_same) - 1 << endl;
        return;
    }
    
    

    // cout << "-" << endl;
    
    

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