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

vector<long long> primeFactors(long long n)
{
    vector<long long> factorization;
    for (long long d = 2; d * d <= n; d++)
    {
        while (n % d == 0)
        {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}

// ____________________________________________________________________________________________________________
// ____________________________________________________________________________________________________________

void TheSlothThatCodes()
{
    int n, m;
    cin >> n >> m;
    vll b(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }

    vector<vector<pair<int, ll>>> adj(n + 1);
    vll weights;
    weights.reserve(m);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        weights.push_back(w);
    }

    if (m == 0)
    {
        cout << -1 << endl;
        return;
    }

    sort(weights.begin(), weights.end());
    weights.erase(unique(weights.begin(), weights.end()), weights.end());

    vll dp(n + 1, -1);
    ll ans = -1;
    int lo = 0, hi = weights.size() - 1;

    while (lo <= hi)
    {
        int mid = (lo + hi) >> 1;
        ll W = weights[mid];

        fill(dp.begin(), dp.end(), -1LL);
        dp[1] = b[1];
        for (int u = 1; u <= n; u++)
        {
            if (dp[u] < 0)
                continue;
            for (auto e : adj[u])
            {
                int v = e.first;
                ll w = e.second;
                if (w > W || dp[u] < w)
                    continue;
                ll x = dp[u] + b[v];
                if (x > dp[v])
                {
                    dp[v] = x;
                }
            }
        }

        if (dp[n] >= 0)
        {
            ans = W;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
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
        TheSlothThatCodes();
    }

    return 0;
}