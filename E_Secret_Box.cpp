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

int checkAndIncrement(int x)
{
    if (x - floor(x) > 0)
    {
        return x + 1;
    }
    else
    {
        return x;
    }
}

// ____________________________________________________________________________________________________________
// ____________________________________________________________________________________________________________

void solve()
{
    int x, y, z, k;
    cin >> x >> y >> z >> k;

    int x1 = cbrt(k), y1 = cbrt(k), z1 = cbrt(k);

    int x1_upper_bound = pow((x1 + 1), 3);
    int y1_upper_bound = pow((y1 + 1), 3);
    int z1_upper_bound = pow((z1 + 1), 3);

    bool found = false;
    for (int i = x1; i <= min(x1_upper_bound, x); i++)
    {

        if (found)
        {
            break;
        }
        if (i * y1 * z1 == k)
        {
            x1 = i;
            found = true;
            break;
        }
        for (int j = y1; j <= min(y1_upper_bound, y); j++)
        {
            if (found)
            {
                break;
            }
            if (i * j * z1 == k)
            {
                x1 = i;
                y1 = j;
                found = true;
                break;
            }
            for (int l = z1; l <= min(z1_upper_bound, z); l++)
            {
                if (i * j * l == k)
                {
                    x1 = i;
                    y1 = j;
                    z1 = l;
                    found = true;
                    break;
                }
            }
        }
    }

    // cout << x1 << " " << y1 << " " << z1 << endl;

    if (x1 * y1 * z1 != k)
    {
        cout << 0 << endl;
        return;
    }

    vll v1 = {x, y, z};
    vll v2 = {x1, y1, z1};

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int ans = 1;
    for (int i = 0; i < 3; i++)
    {
        ans *= v1[i] - v2[i] + 1;
    }

    cout << ans << endl;
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