#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long

void solve()
{
    ll len; cin >> len;
    vector<int> lst;
    for (ll i = 0; i < len; i++)
    {
        int x; cin >> x;
        lst.push_back(x);
    }

    ll n_q; cin >> n_q;

    while (n_q--)
    {
        ll a, b; cin >> a >> b;
        a--; b--;

        ll start = a, end = b;

        while (start <= end)
        {
            if (lst[start] != lst[end])
            {
                break;
            }

            else
            {
                start++;
                end--;
            }
        }
        
        if (start > end)
        {
            cout << -1 << " " << -1 << endl;
            return;
        }

        cout << start << " " << end+1 << endl;
        
    }

    cout << endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int c; cin >> c;
    while (c--)
    {
        solve();
    }
    
    return 0;
}