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
    int k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;


    int cnt1 = 0;
    int temp1 = k;
    if (temp1 >= a) {
        int t1 = (temp1 - a) / x + 1;
        cnt1 += t1;
        temp1 -= t1 * x;
    }
    if (temp1 >= b) {
        int t2 = (temp1 - b) / y + 1;
        cnt1 += t2;
    }

    int cnt2 = 0;
    int temp2 = k;
    if (temp2 >= b) {
        int t2 = (temp2 - b) / y + 1;
        cnt2 += t2;
        temp2 -= t2 * y;
    }
    if (temp2 >= a) {
        int t1 = (temp2 - a) / x + 1;
        cnt2 += t1;
    }

    cout << max(cnt1, cnt2) << endl;
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