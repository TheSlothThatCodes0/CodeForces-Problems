#include<iostream>
#include<bits/stdc++.h>
#include <numeric>
using namespace std; 

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define vll vector<long long>
#define endl "\n"
#define int ll
#define pb push_back

int lcm(int a, int b) {
  if (a == 0 || b == 0) {
    return 0;
  }
  int gcd = __gcd(a, b);
  return a * b / gcd;
}

void solve()
{
    int n; cin >> n;

    if (n % 2 == 0)
    {
        cout << n/2 << " " << n/2 << endl;
        return;
    }

    if(n == 1)
    {
        cout << 1 << " " << 1 << endl;
        return;
    }

    int a = 1;
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            a = n/i;
            break;
        }
    }
    
    cout << a << " " << n-a << endl;
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