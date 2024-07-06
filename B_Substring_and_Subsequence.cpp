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

void solve()
{
    string s_string, s_sequence;
    cin >> s_string >> s_sequence;

    int longest_common = 0;
    for (int i = 0; i < s_string.size(); i++)
    {

        char target = s_string[i];
        for (int j = 0; j < s_sequence.size(); j++)
        {
            int stash = j;
            int temp = 0;
            if (s_sequence[j] == target)
            {
                j++;
                temp = 1;
                for (int k = i+1; k < s_string.size(); k++)
                {
                    if (s_sequence[j] == s_string[k])
                    {
                        j++;
                        temp++;
                    }
                }

                longest_common = max(longest_common, temp);
            }
            
            j=stash;
        }

        // longest_common = max(longest_common, temp);
    }

    // cout << "longest_common: " << longest_common << endl;

    int ans = s_sequence.size() + s_string.size() - longest_common;

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
        solve();
    }

    return 0;
}