#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void TheSlothThatCodes()
{
    string s;
    ll n;
    cin >> s;
    n = s.size();
    s = ' ' + s;
    ll res = 1e18;
    ll l1 = 0, l2 = 0;
    for (int i = n; i; i--)
        if (s[i] == '0')
        {
            l2 = i;
            break;
        }
    if (l2)
    {
        for (int i = l2 - 1; i; i--)
            if (s[i] == '0' or s[i] == '5')
            {
                l1 = i;
                break;
            }
    }
    if (l1 and l2)
        res = min(res, n - l1 - 1);
    l1 = l2 = 0;
    for (int i = n; i; i--)
        if (s[i] == '5')
        {
            l2 = i;
            break;
        }
    if (l2)
    {
        for (int i = l2 - 1; i; i--)
            if (s[i] == '2' or s[i] == '7')
            {
                l1 = i;
                break;
            }
    }
    if (l1 and l2)
        res = min(res, n - l1 - 1);
    cout << res << '\n';
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