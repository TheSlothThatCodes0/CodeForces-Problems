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
    int a, b; cin >> a >> b;
    if (a == b)
    {
        cout << 0 << endl;
        return;
    }

    int x1 = a/gcd(a, b), x2 = b/gcd(a, b);

    if ((x1 % 2 == 0 || x1 % 3 == 0 || x1 % 5 == 0 || x1 == 1) && (x2 % 2 == 0 || x2 % 3 == 0 || x2 % 5 == 0 || x2 == 1))
    {
        int count = 0;
        while (x1 % 2 == 0 || x1 % 3 == 0 || x1 % 5 == 0)
        {
            if (x1 % 5 == 0)
            {
                x1 /= 5;
                count++;
            }
            else if (x1 % 3 == 0)
            {
                x1 /= 3;
                count++;
            }
            else if (x1 % 2 == 0)
            {
                x1 /= 2;
                count++;
            }
        }

        while (x2 % 2 == 0 || x2 % 3 == 0 || x2 % 5 == 0)
        {
            if (x2 % 5 == 0)
            {
                x2 /= 5;
                count++;
            }
            else if (x2 % 3 == 0)
            {
                x2 /= 3;
                count++;
            }
            else if (x2 % 2 == 0)
            {
                x2 /= 2;
                count++;
            }
        }

        if (x1 != x2)
        {
            cout << -1 << endl;
            return;
        }
        

        cout << count << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

// ____________________________________________________________________________________________________________
// ____________________________________________________________________________________________________________


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    // cin >> c;
    
    
        solve();
    

    return 0;
}