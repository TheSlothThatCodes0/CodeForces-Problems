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
    int n, k;
    cin >> n >> k;
    vector<int> x(n + 3, 0);
    for (int i = 1; i <= n; i++)
    {
        ll a;
        cin >> a;
        x[i] = (a <= k);
    }

    vector<int> pre(n + 3, 0), suf(n + 4, 0);
    vector<char> preg(n + 3, 0), sufg(n + 4, 0);
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + x[i];
        int len = i;
        if (i < n && pre[i] * 2 >= len + (len & 1))
            preg[i] = 1;
    }
    for (int i = n; i >= 1; i--)
    {
        suf[i] = suf[i + 1] + x[i];
        int len = n - i + 1;
        if (i > 1 && suf[i] * 2 >= len + (len & 1))
            sufg[i] = 1;
    }

    vector<char> mid_end(n + 3, 0);
    int l_end = 1, cnt_end = 0;
    for (int r = 1; r <= n; ++r)
    {
        cnt_end += x[r];
        while (l_end <= r &&
               cnt_end * 2 < (r - l_end + 1) + ((r - l_end + 1) & 1))
        {
            cnt_end -= x[l_end++];
        }
        mid_end[r] = (l_end <= r);
    }

    vector<char> mid_start(n + 3, 0);
    int r_start = n, cnt_start = 0;
    for (int l = n; l >= 1; --l)
    {
        cnt_start += x[l];
        while (r_start >= l &&
               cnt_start * 2 < (r_start - l + 1) + ((r_start - l + 1) & 1))
        {
            cnt_start -= x[r_start--];
        }
        mid_start[l] = (r_start >= l);
    }

    bool seenP = false;
    for (int r = 3; r <= n; r++)
    {
        if (r - 2 >= 1 && preg[r - 2])
            seenP = true;
        if (sufg[r] && seenP)
        {
            YES;
            return;
        }
    }

    for (int l = 1; l < n; l++)
    {
        if (preg[l] && mid_start[l + 1])
        {
            YES;
            return;
        }
    }

    for (int r = 2; r <= n; r++)
    {
        if (mid_end[r - 1] && sufg[r])
        {
            YES;
            return;
        }
    }

    NO;
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