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
    int n;
    cin >> n;

    vector<vll> arr(n, vll(n));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> arr[i][j];
        }
    }

    vll p(2 * n + 1, 0);
    vector<bool> seen(2 * n + 1, false);

    for (int i = 2; i <= 2 * n; ++i)
    {
        int x, y;
        if (i <= n + 1)
        {
            x = 1;
            y = i - 1;
        }
        else
        {
            y = n;
            x = i - n;
        }

        int value = arr[x - 1][y - 1];
        p[i] = value;
        seen[value] = true;
    }

    int first = -1;
    for (int i = 1; i <= 2 * n; ++i)
    {
        if (!seen[i])
        {
            first = i;
            break;
        }
    }
    p[1] = first;

    for (int i = 1; i <= 2 * n; ++i)
    {
        cout << p[i] << " ";
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
        TheSlothThatCodes();
    }

    return 0;
}