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
    int n; cin >> n;
    vll a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int min_ = INT_MAX;

    for (int i = 0; i < n-1; i++)
    {
        min_ = min(min_, max(a[i], a[i+1]));
    }
    
    cout << min_ - 1<< endl;

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