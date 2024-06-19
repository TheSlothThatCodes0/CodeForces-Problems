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

    int x = 0;
    if (a % 4 == 0)
    {
        x = 0;
    }
    
    else if (a % 4 == 1)
    {
        x = a-1;
    }

    else if (a % 4 == 2)
    {
        x = 1;
    }
    else
    {
        x = a;
    }

    if (x == b)
    {
        cout << a << endl;
    }
    else if ((x ^ b) == a)
    {
        cout << a + 2 << endl;
    }
    else
    {
        cout << a + 1 << endl;
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