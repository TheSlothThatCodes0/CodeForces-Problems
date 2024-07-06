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

vector<long long> primeFactors(long long n) {
    vector<long long> factorization;
    for (long long d = 2; d * d <= n; d++) {
        while (n % d == 0) {
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


void solve()
{
    int n, m, l; cin >> n >> m >> l;

    vector<pair<int, int>> edges(m);
    for (int i = 0; i < m; i++)
    {
        int a, b; cin >> a >> b;
        edges[i] = {a, b};
    }

    vector<unordered_set<int>> adj(n + 1);
    vector<int> count(n + 1, 0);

    for (int i = 0; i < m; i++)
    {
        adj[edges[i].first].insert(edges[i].second);
        adj[edges[i].second].insert(edges[i].first);
    }

    for (int i = 1; i <= n; ++i)
    {
        vector<int> arr(adj[i].begin(), adj[i].end());
        sort(arr.begin(), arr.end());

        for (int j = 0; j < arr.size(); ++j)
        {
            for (int k = j+1; k < arr.size(); ++k)
            {
                if (adj[arr[j]].count(arr[k]) > 0)
                {
                    count[i]++;
                }
            }
        }
    }
    

    for (int i = 1; i <= n; ++i)
    {
        count[i] /= 3;
    }

    int ans = 0;

    for (int i = 1; i <= n; ++i)
    {
        if (count[i] < l)
        {
            ans ++;
        }
        
    }
    
    cout << ans/2 << endl;

    
}

// ____________________________________________________________________________________________________________
// ____________________________________________________________________________________________________________


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int c;
    // cin >> c;
    // while (c--)
    // {
    //     solve();
    // }

    solve();

    return 0;
}