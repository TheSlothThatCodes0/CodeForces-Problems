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
    int n , m; cin >> n >> m;

    vll v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vll prefix;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        prefix.pb(sum);
    }

    while (m--)
    {
        int l, s;  cin >> l >> s;
        int left = l - 1, right = n - 1, mid;
        int ans = -1;
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            if (prefix[mid] - (l > 1 ? prefix[l-2] : 0) >= s)
            {
                ans = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        if (ans != -1)
        {
            cout << ans + 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
// ____________________________________________________________________________________________________________
// ____________________________________________________________________________________________________________


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}