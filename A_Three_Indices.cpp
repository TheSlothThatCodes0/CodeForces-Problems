#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define vll vector<long long>

void TheSlothThatCodes()
{
    ll len;
    cin >> len;
    vll lst;

    for (ll i = 0; i < len; i++)
    {
        ll x;
        cin >> x;
        lst.push_back(x);
    }

    for (ll i = 0; i < len; i++)
    {
        
    }
}

void solve_2()
{
    const int N = 1000;

    int n;
    int a[N];
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 1; i < n - 1; ++i)
    {
        if (a[i] > a[i - 1] && a[i] > a[i + 1])
        {
            cout << "YES" << endl;
            cout << i << ' ' << i + 1 << ' ' << i + 2 << endl;
            return;
        }
    }
    cout << "NO" << endl;
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