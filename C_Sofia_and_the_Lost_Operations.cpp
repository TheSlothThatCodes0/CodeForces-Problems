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
    vll origional(n), modified(n);

    for (int i = 0; i < n; i++)
    {
        cin >> origional[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> modified[i];
    }

    int m;
    cin >> m;

    vll modifications(m);

    for (int i = 0; i < m; i++)
    {
        cin >> modifications[i];
    }

    vll different;
    for (int i = 0; i < n; i++)
    {
        if (origional[i] != modified[i])
        {
            different.pb(modified[i]);
        }
    }

    if (different.size() > m)
    {
        NO;
        return;
    }

    vll temp1 = different;
    vll temp2 = modifications;
    sort(temp1.begin(), temp1.end());
    sort(temp2.begin(), temp2.end());

    if (!includes(temp2.begin(), temp2.end(), temp1.begin(), temp1.end()))
    {
        NO;
        return;
    }

    int last = modifications.back();
    bool found = false;
    for (int i = 0; i < modified.size(); i++)
    {
        if (modified[i] == last)
        {
            found = true;
        }
    }

    if (found == false)
    {
        NO;
        return;
    } 
    YES;
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