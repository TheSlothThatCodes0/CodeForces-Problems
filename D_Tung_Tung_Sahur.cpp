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

bool solve(string &p, string &s, int i, int j, vector<vll> &memo)
{
    if (i == p.size() && j == s.size())
    {
        return true;
    }

    if (i == p.size() || j == s.size())
    {
        return false;
    }

    if (memo[i][j] != -1)
    {
        return memo[i][j] == 1;
    }

    if (p[i] != s[j])
    {
        memo[i][j] = 0;
        return false;
    }

    bool result = false;

    result = solve(p, s, i + 1, j + 1, memo);

    if (j + 1 < s.size() && s[j] == s[j + 1])
    {
        result = result || solve(p, s, i + 1, j + 2, memo);
    }

    memo[i][j] = result ? 1 : 0;
    return result;
}

void TheSlothThatCodes()
{
    string p, s;
    cin >> p >> s;

    int n = p.length();
    int m = s.length();

    if(m < n || m > 2 * n){
        NO;
        return;
    }

    int i = 0; 
    int j = 0; 
    bool possible = true;

    while (i < n && j < m) {
        if (p[i] != s[j]) {
            possible = false;
            break; 
        }

        char current_char = p[i];

        int count_p = 0;
        int start_i = i;
        while (i < n && p[i] == current_char) {
            i++;
            count_p++;
        }

        int count_s = 0;
        int start_j = j;
        while (j < m && s[j] == current_char) {
            j++;
            count_s++;
        }

        if (count_s < count_p || count_s > 2 * count_p) {
            possible = false;
            break;
        }
    }

    if (i < n || j < m) {
         possible = false;
    }


    if (possible) {
        YES;
    } else {
        NO;
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
        TheSlothThatCodes();
    }

    return 0;
}
