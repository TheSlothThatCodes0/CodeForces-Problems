#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define vll vector<long long>
#define endl "\n"
#define int ll
#define pb push_back

int gcd(int a, int b)
{
    if (!a || !b)
        return a | b;
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do
    {
        b >>= __builtin_ctz(b);
        if (a > b)
            swap(a, b);
        b -= a;
    } while (b);
    return a << shift;
}

int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}

int checkAndIncrement(int x) {
    if (x - floor(x) > 0) {
        return x + 1;
    } else {
        return x;
    }
}

// ____________________________________________________________________________________________________________
// ____________________________________________________________________________________________________________


void solve()
{
    int a, b; cin >> a >> b;

    vll v(a*b);
    int count = 0;

    for (int i = 0; i < a*b; i++)
    {
        cin >> v[i];
        if (v[i] < 0)
        {
            count++;
            v[i] = -v[i];
        }    
    }

    
    // cout << "count: " << count << endl;


    sort(v.begin(), v.end());

    if (count % 2 == 0)
    {
        int sum = 0;
        for (int i = 0; i < a*b; i++)
        {
            sum += abs(v[i]);
        }

        cout << sum << endl;
        return;
    }

    else
    {
        int sum = 0;
        for (int i = 1; i < a*b; i++)
        {
            sum += abs(v[i]);
        }

        sum -= abs(v[0]);
        cout << sum << endl;
        return;
        
    }
    
    
    
    


}

// ____________________________________________________________________________________________________________
// ____________________________________________________________________________________________________________


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    cin >> c;
    while (c--)
    {
        solve();
    }

    return 0;
}