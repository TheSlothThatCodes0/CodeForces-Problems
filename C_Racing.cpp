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
    vll d(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> d[i];
    }

    vll l(n + 1), r(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> l[i] >> r[i];
    }

    vector<pair<int, int>> arr(n + 1);
    arr[0] = {0, 0};
    int x = 0, y = 0;

    for (int i = 1; i <= n; i++)
    {
        int left, right;
        if (d[i] == 0)
        {
            left = x;
            right = y;
        }
        else if (d[i] == 1)
        {
            left = x + 1;
            right = y + 1;
        }
        else
        { 
            left = x;
            right = y + 1;
        }

        x = max(left, l[i]);
        y = min(right, r[i]);

        if (x > y)
        {
            cout << -1 << endl;
            return;
        }
        
        arr[i] = {x, y};
    }


    vll temp(n + 1), ans(n + 1);
    temp[n] = y; 

    for (int i = n; i >= 1; i--)
    {
        if (d[i] != -1)
        {
            ans[i] = d[i];
            temp[i - 1] = temp[i] - d[i];
        }
        else
        {
            int left = arr[i - 1].first;
            int right = arr[i - 1].second;

            if (temp[i] >= left && temp[i] <= right)
            {
                ans[i] = 0;
                temp[i - 1] = temp[i];
            }
            else
            {
                ans[i] = 1;
                temp[i - 1] = temp[i] - 1;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
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