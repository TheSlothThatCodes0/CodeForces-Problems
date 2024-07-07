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



void TheSlothThatCodes()
{
    int n, s, t; cin >> n >> s >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int consicutive = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= t)
        {
            consicutive++;
        }
        else
        {
            if (consicutive >= s)
            {
                // ans += ways(consicutive, s);
                ans += (consicutive - s + 1) * (consicutive - s + 2) / 2;
            }
            consicutive = 0;
        }
    }
    
    // cout << "cons: " << ans << endl;
    if (consicutive >= s)
    {
        // ans += ways(consicutive, s);
        ans += (consicutive - s + 1) * (consicutive - s + 2) / 2;
    }
    
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int c; cin >> c;
    while (c--)
    {
        TheSlothThatCodes();
    }
    
    return 0;
}