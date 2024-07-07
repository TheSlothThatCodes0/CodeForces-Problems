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

    vll a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int score_a = 0, score_b = 0;
    int minus_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            score_a += a[i];
        }
        else if (b[i] > a[i])
        {
            score_b += b[i];
        }
        else
        {
            if (a[i] == -1)
            {
                minus_count++;
                continue;
            }
            
            if (score_a < score_b)
            {
                score_a += a[i];
            }
            else
            {
                score_b += b[i];
            } 
        }
    }

    if (minus_count > abs(score_a - score_b))
    
    {
        minus_count -= abs(score_a - score_b);
        score_a = min(score_a, score_b);
        score_b = score_a;

        if (minus_count % 2 == 0)
        {
            score_a -= minus_count / 2;
            score_b -= minus_count / 2;
        }
        else
        {
            score_a -= minus_count / 2;
            score_b -= minus_count / 2 + 1;
        }
    }
    else
    {
        if (score_a < score_b)
        {
            score_b -= minus_count;
        }
        else
        {
            score_a -= minus_count;
        }
    }
    

    

    // cout << "score_a: " << score_a << " score_b: " << score_b << endl; 
    
    cout << min(score_a, score_b) << endl;
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