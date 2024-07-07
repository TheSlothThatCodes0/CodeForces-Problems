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
    int n, d; cin >> n >> d;
    vll a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    int ans = 0;
    int x = n; 
    for (int i = 0; i < x; i++)
    {
        int sub = (d/a[i]);
        if (sub < x-i)
        {
            ans++;
        }
        x -= sub;
    }
    
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    TheSlothThatCodes();
    
    return 0;
}