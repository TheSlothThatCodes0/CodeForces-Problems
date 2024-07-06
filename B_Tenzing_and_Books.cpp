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

bool bitCheck(int a, int b)
{
    bool ans = true;
    for (int i = 0; i < 30; i++)
    {
        if (((a & (1 << i) == false) && (b & (1 << i)) == true) || ((a & (1 << i) == true) && (b & (1 << i)) == false))
        {
            ans = false;
            break;
        }
    }

    return ans;
}

void solve()
{
    int n, m; cin >> n >> m;
    vll a(n), b(n), c(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> c[i];
    }

    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (temp == m)
        {
            YES;
            return;
        }

        else if (a[i] <= m && bitCheck(a[i], m))
        {
            temp = temp | a[i];
            // cout <<"temp: " <<  temp << endl;
        }
        else
        {
            break;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        if (temp == m)
        {
            YES;
            return;
        }

        else if (b[i] <= m && bitCheck(b[i], m))
        {
            temp = temp | b[i];
            // cout <<"temp: " <<  temp << endl;
        }
        else
        {
            break;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        if (temp == m)
        {
            YES;
            return;
        }

        else if (c[i] <= m && bitCheck(c[i], m))
        {
            temp = temp | c[i];
            // cout <<"temp: " <<  temp << endl;
        }
        else
        {
            break;
        }
        
    }

    if (temp == m)
    {
        YES;
        return;
    }
    else
    {
        NO;
        // cout << temp << endl;
        return;
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