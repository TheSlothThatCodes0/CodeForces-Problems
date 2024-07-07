#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define vll vector<long long>
#define endl "\n"
#define int ll
#define pb push_back

void TheSlothThatCodes()
{
    int n;
    cin >> n;
    vll a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int x = 1;
    int sum = 0;
    vll ans;
    for (int i = 0; i < n; i++)
    {
        x *= a[i] / __gcd(x, a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum += x / a[i];
        ans.pb(x / a[i]);
    }

    if (sum >= x)
    {
        cout << -1 << endl;
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
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