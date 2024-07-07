#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define vll vector<long long>

void TheSlothThatCodes()
{
    ll n, x;
    cin >> n >> x;
    vll lst;
    ll sum = 0, ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll ele;
        cin >> ele;
        sum += ele;
        ans += (ele / x);
        if (ele % x != 0)
            ans++;
    }
    ll val = sum / x;
    if (sum % x != 0)
        val++;
    cout << min(val, ans) << " " << max(val, ans) << "\n";
}

int main()
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