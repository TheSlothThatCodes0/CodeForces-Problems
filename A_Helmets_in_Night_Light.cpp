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
    int n, p; cin >> n >> p;
    vll a(n), b(n);
    for (int i = 0; i < n; i++)
    {   
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<pair<int, int>> arr;
    for (int  i = 0; i < n; i++)
    {
        arr.push_back({b[i], a[i]});
    }

    sort(arr.begin(), arr.end());

    int left = n-1;
    int ans = p;
    for (auto i : arr)
    {
        if (i.first > p)
        {
            break;
        }

        if(i.second < left)
        {
            left -= i.second;
            ans += i.second * i.first;
        }
        else
        {
            ans += left * i.first;
            left = 0;
            break;
        }
    }
    
    if (left == 0)
    {
        cout << ans << endl;
        return;
    }

    else
    {
        ans += p * left;
    }

    cout << ans << endl;
    return;
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