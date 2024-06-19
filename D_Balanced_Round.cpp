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

void solve()
{
    int n, k; cin >> n >> k;

    vector<int> lst(n);
    for(int i = 0; i < n; i++)
    {
        cin >> lst[i];
    }

    sort(lst.begin(), lst.end());

    int count = 0;
    for(int i = 0; i < n-1; i++)
    {
        if(lst[i+1] - lst[i] > k)
        {
            if (i >= (n/2))
            {
                count +=  n-i-1;
                break;
            }

            else
            {
                count = i+1;
            }
        }
    }
    cout << count << endl;
    
    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int c; cin >> c;
    while (c--)
    {
        solve();
    }
    
    return 0;
}