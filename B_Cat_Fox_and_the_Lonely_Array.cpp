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


void solve()
{
    int n; cin >> n;
    vll a(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vll k;

    for (int i = 0; i < 20; i++)
    {
        int temp = 0;
        int cons = 0;

        for (int i = 0; i < n; i++)
        {

            if(a[i] % 2 == 0)
            {
                temp++;
            }
            else
            {
                cons = max(cons, temp);
                temp = 0;
            }
        }

        cons = max(cons, temp);

        if(cons == n)
        {
            cons = 1;
            k.pb(cons);
        }
        else
        {
            k.pb(cons+1);
        }

        for(int i = 0; i < n; i++)
        {
            a[i] = a[i] >> 1;
        }      
    }
    
    int ans = 0;
    for(int i = 0; i < 20; i++)
    {
        ans = max(ans, k[i]);
    }

    cout << ans << endl;
}

int32_t main()
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