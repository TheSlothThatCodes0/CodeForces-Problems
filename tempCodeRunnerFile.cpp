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
    int n; cin >> n;
    vll a(n);

    

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    bool is_sorted_decreasing = true;

    for (int i = 0; i < n-1; i++)
    {
        if (a[i] < a[i-1] )
        {
            is_sorted_decreasing = false;
            break;
        }
        
    }

    if (is_sorted_decreasing)
    {
        cout << 1 << endl;
        return;
    }
    
    vll b = a;
    int x = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            x ++;
        }
        
    }

    cout << n - x + 1 << endl;
    
    
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
    //     TheSlothThatCodes();
    // }
    TheSlothThatCodes();

    return 0;
}