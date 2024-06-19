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

// ____________________________________________________________________________________________________________
bool isDivisibleByDigits(int num)
{
    int temp = num;
    while (temp > 0)
    {
        int digit = temp % 10;
        if (digit != 0 && num % digit != 0)
        {
            return false;
        }
        temp /= 10;
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;

    int limit = ((n % 2520 == 0) ? n : ((n / 2520) + 1) * 2520);
    // cout << limit << endl;

    for (int i = n; i <= limit; i++)
    {
        if (isDivisibleByDigits(i))
        {
            cout << i << endl;
            return;
        }
    }
}

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