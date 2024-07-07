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
    int n, x; cin >> n >> x;
    string s; cin >> s;

    int sum = 0;
    vll prefix(n);
    
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W')
        {
            sum++;
            prefix[i] = sum;
        }
        else
        {
            prefix[i] = sum;
        }
    }

    int ans = INT_MAX;
    for (int i = 0; i <= n-x; i++)
    {
        if (x == 1)
        {
            int temp = (s[i] == 'W' ? 1 : 0);
            ans = min(ans, temp);
        }
        else
        {
            ans = min(ans, prefix[i+x-1] - (i > 0 ? prefix[i-1] : 0));
        }
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