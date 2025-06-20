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

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> a(n);

    for (int i = 0; i < n; i++)  
    {
        int x;
        cin >> x;
        a[i] = {x, i+1}; 
    }

    sort(a.begin(), a.end(), greater<pair<int,int>>());  

    int p1 = 1, p2 = -1;

    vll ans(n + 1);
    ans[0] = 0;
    int dis = 0;

    for (int i = 0; i < n; i++)
    {
        int index = a[i].second;
        int times = a[i].first;
        if (i % 2 == 0)
        {
            ans[index] = p1;
            dis += 2 * p1 * times;
            p1++;
        }
        else
        {
            ans[index] = p2;
            dis += 2 * abs(p2) * times;
            p2--;
        }
    }

    cout << dis << endl;

    for (auto i : ans)
    {
        cout << i << " ";
    }

    cout << endl;
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