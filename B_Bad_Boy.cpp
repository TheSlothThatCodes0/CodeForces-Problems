#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void TheSlothThatCodes()
{
    ll n, m, i, j;
    cin >> n >> m >> i >> j;

    // (1,m), (1,1), (n,1), (n,m)

    if ((i != 1 && j != 1) && (i != n && j != m))
    {
        cout << "1 1 " << n << " " << m << endl;
        return;
    }

    else
    {
        cout << 1 << " " << m << " " << n << " " << 1 << endl;
        return;
    }
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