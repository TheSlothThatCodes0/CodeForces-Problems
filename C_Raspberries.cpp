#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define vll vector<long long>
#define endl "\n"
#define int ll

void TheSlothThatCodes()
{
    ll len, k;
    cin >> len >> k;
    ll output = INT_MIN, even = 0;
    bool trigger = false;

    for (ll i = 0; i < len; i++)
    {
        ll x;
        cin >> x;
        if (x % k == 0)
        {
            trigger = true;
        }

        if (x % 2 == 0)
        {
            even++;
        }

        output = max(output, x % k);
    }

    if (trigger)
    {
        cout << 0 << endl;
        return;
    }

    ll ans = k - output;

    if (k == 4)
    {
        cout << min(max(0ll, 2-even) , ans) << endl;
        return;
    }

    cout << ans << endl;
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    cin >> c;
    while (c--)
    {
        TheSlothThatCodes();
    }

    return 0;
}