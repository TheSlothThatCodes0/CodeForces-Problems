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
    int n; 
    cin >> n;
    vll a(n); 

    vll count0(30, 0);
    vll count1(30, 0);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        for (int b = 0; b < 30; ++b) {
            if ((a[i] >> b) & 1LL) { 
                count1[b]++; 
            } else {
                count0[b]++;
            }
        }
    }

    int ans = 0; 

    for (int i = 0; i < n; ++i) { 
        int cur = 0; 
        int x = a[i];

        for (int b = 0; b < 30; ++b) {

            if ((x >> b) & 1LL) {
                cur += count0[b] * (1LL << b); 
            }

            else {
                cur += count1[b] * (1LL << b);
            }
        }
        ans = max(ans, cur);
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