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
    vector<int> arr(n+1, -1);

    for (int i = 0; i < p; i++)
    {
        int a ,b; cin >> a >> b;
        if(a > b)
        {
            swap(a, b);
        }
        arr[b] = max(arr[b], a);
    }

    int ans = 0;
    int last = 1;

    for (int i = 1; i <= n; i++)
    {
        last = max(last, arr[i] + 1);
        ans += (i - last + 1);
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