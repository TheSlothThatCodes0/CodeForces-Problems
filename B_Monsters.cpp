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
    vector<pair<int, int>> a(n);

    for (int i = 0; i < n; i++)
    {
        int temp; cin >> temp;
        int x =temp % d;
        if (x == 0)
        {
            x = d;
        }
        
        a[i] = {x, i};
    }

    stable_sort(a.begin(), a.end(), [](pair<int, int> a, pair<int, int> b){
        return a.first > b.first;
    });
    
    for(int i = 0; i < n; i++)
    {
        cout << a[i].second + 1 << " ";
    }

    cout << endl;

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