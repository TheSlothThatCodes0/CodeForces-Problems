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

ll value(int y, ll r, ll c)
{
    if (y == 1)
    {
        if (r == 0 && c == 0)
            return 1;
        if (r == 1 && c == 1)
            return 2;
        if (r == 1 && c == 0)
            return 3;
        if (r == 0 && c == 1)
            return 4;
    }

    ll half = pow(2, y-1);
    ll size =  pow(2, 2*y-2);

    if (r < half && c < half) 
    {

        return value(y - 1, r, c);
    }
    else if (r >= half && c >= half)
    {

        return size + value(y - 1, r - half, c - half);
    }
    else if (r >= half && c < half)
    {

        return 2 * size + value(y - 1, r - half, c);
    }
    else
    {

        return 3 * size + value(y - 1, r, c - half);
    }
}

pair<ll, ll> cords(int y, ll num)
{
    if (y == 1)
    {
        if (num == 1)
            return {0, 0};
        if (num == 2)
            return {1, 1};
        if (num == 3)
            return {1, 0};
        if (num == 4)
            return {0, 1};
    }

    ll half = pow(2, y-1);
    ll size =  pow(2, 2* y-2);

    if (num <= size)
    {
        return cords(y - 1, num);
    }
    else if (num <= 2 * size)
    {
        pair<ll, ll> temp = cords(y - 1, num - size);
        return {temp.first + half, temp.second + half};
    }
    else if (num <= 3 * size)
    {

        pair<ll, ll> temp = cords(y - 1, num - 2 * size);
        return {temp.first + half, temp.second};
    }
    else
    {

        pair<ll, ll> temp = cords(y - 1, num - 3 * size);

        return {temp.first, temp.second + half};
    }
}

void solve()
{
    int n, q;
    cin >> n >> q;

    while (q--)
    {
        char c1, c2;
        cin >> c1 >> c2;

        if (c1 == '-' && c2 == '>')
        {
            ll x, y;
            cin >> x >> y;
            cout << value(n, x - 1, y - 1) << endl;
        }
        else if (c1 == '<' && c2 == '-')
        {
            ll d;
            cin >> d;
            pair<ll, ll> ans = cords(n, d);

            cout << ans.first + 1 << " " << ans.second + 1 << endl;
        }
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