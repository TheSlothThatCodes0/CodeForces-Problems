#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define vll vector<long long>

void solve()
{
    ll len;
    cin >> len;
    ll sum1 = 0;
    string output;
    bool checker = true;
    for (ll i = 0; i < len; i++)
    {
        string s;
        cin >> s;

        ll sum = 0;

        for (ll j = 0; j < len; j++)
        {
            sum += (s[j] - '0');
        }

        // cout << sum << " " << sum1 << " ";

        if (sum1 > 0 && sum > 0)
        {
            if (sum != sum1)
            {
                // output = "TRIANGLE";
                checker = false;
            }

            else
            {
                // cout << "SQUARE" << endl;
                checker = true;
            }
        }

        sum1 = sum;
    }

    if (checker)
    {
        cout << "SQUARE" << endl;
        return;
    }

    cout << "TRIANGLE" << endl;

    
    

    // cout << "-" << endl;
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