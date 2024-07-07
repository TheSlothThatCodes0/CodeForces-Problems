#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define vll vector<long long>
#define endl "\n"
#define int ll

void TheSlothThatCodes()
{
    ll n; cin >> n;
    ll two = 0, three = 0;
    
    while (n%2 == 0)
    {
       n /= 2;
       two++; 
    }

    while (n%3 == 0)
    {
        n /= 3;
        three++;
    }

    // cout << two << " " << three << " ";
    if (two > three || n != 1)
    {
        cout << -1 << endl;
        return;
    }

    cout << three + (three-two) << endl;

    
    
    
    
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