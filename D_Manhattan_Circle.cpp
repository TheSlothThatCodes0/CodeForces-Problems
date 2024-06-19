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

int lcm(vll a)
{
    int result = 1;
    for (int i = 0; i < a.size(); i++)
    {
        result = lcm(result, a[i]);
    }
    return result;
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
    int h, b; cin >> h >> b;
    vector<vector<char>> a;

    for (int i = 0; i < h; i++)
    {
        vector<char> temp;
        for (int i = 0; i < b; i++)
        {
            char x; cin >> x;
            temp.pb(x);
        }

        a.pb(temp);
    }

    int x_min = INT_MAX, x_max = INT_MIN, y_min = INT_MAX, y_max = INT_MIN;

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < b; ++j) {
            if (a[i][j] == '#') {
                x_min = min(x_min, i + 1);
                x_max = max(x_max, i + 1); 
                y_min = min(y_min, j + 1); 
                y_max = max(y_max, j + 1); 
            }
        }
    }

    int x1 = (x_min + x_max) / 2;
    int x2 = (y_min + y_max) / 2;

    cout << x1 << " " << x2 << endl;
    
    
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