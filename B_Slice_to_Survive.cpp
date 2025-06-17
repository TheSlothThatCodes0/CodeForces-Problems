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


void TheSlothThatCodes()
{
    ll n, m, start, end;
    cin >> n >> m >> start >> end;

    ll fr = 0, x = n;
    while (x > 1) {
        x = (x + 1) / 2;
        fr++;
    }
    ll fm = 0, y = m;
    while (y > 1) {
        y = (y + 1) / 2;
        fm++;
    }

    ll rem_r = min(start, n - start + 1);
    ll frm = 0, z = rem_r;
    while (z > 1) {
        z = (z + 1) / 2;
        frm++;
    }

    ll rem_c = min(end, m - end + 1);
    ll fcm = 0, w = rem_c;
    while (w > 1) {
        w = (w + 1) / 2;
        fcm++;
    }

    ll ans_row = 1 + frm + fm;
    ll ans_col = 1 + fr + fcm;
    cout << min(ans_row, ans_col) << endl;
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