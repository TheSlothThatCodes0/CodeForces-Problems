#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long

void TheSlothThatCodes()
{
    ll len; cin >> len;;
    vector<ll> lst;

    map<ll, ll> mp;

    for (ll i = 0; i < len; i++)
    {
        ll x; cin >> x;
        lst.push_back(x);
        mp[x]++;
    }
    
    ll max_ = 0;
    for (pair<ll, ll> i : mp)
    {
        max_ = max(max_, i.second);
    }
    
    ll count = 0;

    while (max_ < len)
    {
        ll x = min(len - max_, max_);
        count += 1 + x;
        max_ += x;
    }
    
    cout << count << endl; 
}

int main()
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

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     int T;
//     cin >> T;
//     while (T --> 0) {
//         int n;
//         cin >> n;
//         map<int, int> q;
//         for (int i = 0; i < n; ++i) {
//             int x;
//             cin >> x;
//             ++q[x];
//         }
//         int am = 0;
//         for (pair<int, int> i : q) {
//             am = max(am, i.second);
//         }
//         int ans = 0;
//         while (am < n) {
//             int d = min(n - am, am);
//             ans += 1 + d;
//             am += d;
//         }
//         cout << ans << '\n';
//     }
//     return 0;
// }