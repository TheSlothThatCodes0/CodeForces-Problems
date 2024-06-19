#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void solve()
{
    ll len;
    cin >> len;
    ll output;
    cin >> output;
    for (ll i = 0; i < len - 1; i++)
    {
        ll x;
        cin >> x;
        output = output & x;
    }

    cout << output << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    cin >> c;
    while (c--)
    {
        solve();
    }

    return 0;
}