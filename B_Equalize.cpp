#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

#define ll long long

void solve()
{
    ll len;
    cin >> len;
    vector<ll> lst_v;
    set<ll> lst;
    for (ll i = 0; i < len; i++)
    {
        ll x;
        cin >> x;
        lst_v.push_back(x);
    }

    sort(lst_v.begin(), lst_v.end());

    for (ll i = 0; i < len; i++)
    {
        lst.insert(lst_v[i]);
    }

    lst_v.clear();

    vector<ll> diff;
    auto it = lst.begin();
    auto prev = *it;
    ++it;
    for (; it != lst.end(); ++it)
    {
        diff.push_back(abs(*it - prev));
        prev = *it;
    }

    // // cout << "_______________" << endl;

    // for (ll i : diff)
    // {
    //     cout << i << " ";
    // }

    // cout << endl << "_______________" << endl;

    ll count = 1, sum = 0, max_ = 0;
    for (ll i : diff)
    {
        if (sum + i < len)
        {
            sum += i;
            count++;
        }
        
        else
        {
            max_ = max(max_, count);
            sum = 0;
            count = 1;

            if (i <= len)
            {
                sum = i;
            }

        }
        
    }

    max_ = max(max_, count);
    
    cout << max_ << endl;   
    

    
}

void solve_2()
{
    ll len; cin >> len;

    vector<ll> lst;

    for (int i = 0; i < len; i++)
    {
        int x; cin >> x;
        lst.push_back(x);
    }
    
    sort(lst.begin(), lst.end());

    // removing the duplicate elements
    auto unique_element = unique(lst.begin(),lst.end());
    lst.erase(unique_element, lst.end());

    ll ptr = 0, ans = 0;

    for (ll i = 0; i < lst.size(); i++)
    {
        while (lst[i] - lst[ptr] >= len)
        {
            ptr++;
        }

        ans = max(ans, i-ptr+1);
        
    }

    cout << ans << endl;
    



}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    cin >> c;
    while (c--)
    {
        solve_2();
    }

    return 0;
}
