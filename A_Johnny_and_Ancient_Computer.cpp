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
    int a, b; cin >> a >> b;

    if (a > b)
    {
        swap(a, b);
    }

    if (b % a == 0)
    {
        int count = 0;
        int x = b/a;

        while (x % 8 == 0)
        {
            x /= 8;
            count++;
        }
        
        while (x % 4 == 0)
        {
            x /= 4;
            count++;
        }

        while (x % 2 == 0)
        {
            x /= 2;
            count++;
        }

        if (x == 1)
        {
            cout << count << endl;
            return;
        }

        else
        {
            cout << -1 << endl;
            return;
        }
        
    }

    else
    {
        cout << -1 << endl;
        return;
    }
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