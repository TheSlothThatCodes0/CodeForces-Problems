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
    int n, m;
    cin >> n >> m;

    vector<vector<int>> gridA, gridB;

    for (int i = 0; i < n; ++i)
    {
        string input; cin >> input;
        vll temp;
        for (int j = 0; j < m; ++j)
        {
            char value = input[j];
            temp.pb(value - '0');
        }
        gridA.pb(temp);
    }

    for (int i = 0; i < n; ++i)
    {
        string input; cin >> input;
        vll temp;
        for (int j = 0; j < m; ++j)
        {
            char value = input[j];
            temp.pb(value - '0');
        }
        gridB.pb(temp);
    }



    for (int i = n - 1; i >= 1; --i) {
        for (int j = m - 1; j >= 1; --j) {
            if (gridA[i][j] != gridB[i][j]) {
                
                int a = gridA[i][j];
                int b = gridB[i][j];
                gridA[i][j] = b;
                gridA[i-1][j-1] = (gridA[i-1][j-1] + ((b - a + 3) % 3)) % 3;
                gridA[i-1][j] = (gridA[i-1][j] + 2 * ((b - a + 3) % 3)) % 3;
                gridA[i][j-1] = (gridA[i][j-1] + 2 * ((b - a + 3) % 3)) % 3;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (gridA[i][j] != gridB[i][j])
            {
                NO;
                return;
            }
        }
        
    }
    

    YES;
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