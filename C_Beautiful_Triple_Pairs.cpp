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

    map<int, vector<int>> first, second, third;

    for(int i =0; i < n-2; i++)
    {
        first[a[i]].pb(i);
        second[a[i+1]].pb(i);
        third[a[i+2]].pb(i);
    }

    ll ans = 0;

    for(int i =0; i < n-2; i++)
    {
        vector<int> first_set = first[a[i]];
        vector<int> second_set = second[a[i+1]];
        vector<int> third_set = third[a[i+2]];

        ans += 
    }
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