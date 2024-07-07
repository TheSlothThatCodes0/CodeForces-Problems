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

bool bitChecker(int a, int b)
{
    int ans = true;
    for (int i = 0; i < 32; i++)
    {
        int bit_a = (a >> i) & 1;
        int bit_b = (b >> i) & 1;
        if (!bit_a && bit_b)
        {
            ans = false;
            break;
        }
    }
    
    return ans;
}

void TheSlothThatCodes()
{
    int n, x; cin >> n >> x;
    vll s1(n), s2(n), s3(n);

    for (int i = 0; i < n; i++) {
        cin >> s1[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> s2[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> s3[i];
    }


    bool flag1 = true, flag2 = true, flag3 = true;
    int knowledge = 0;

    for (int i = 0; i < n; i++)
    {
        if (knowledge == x)
        {
            break;
        }
        
        if (flag1)
        {
            if (bitChecker(x, s1[i]))
            {
                knowledge |= s1[i];
            }
            else
            {
                flag1 = false;
            }   
        }
        
        if (flag2)
        {
            if (bitChecker(x, s2[i]))
            {
                knowledge |= s2[i];
            }
            else
            {
                flag2 = false;
            }   
        }
        
        if (flag3)
        {
            if (bitChecker(x, s3[i]))
            {
                knowledge |= s3[i];
            }
            else
            {
                flag3 = false;
            }   
        }      
    }


    if (knowledge == x)
    {
        YES;
        // cout << knowledge << endl;
    }
    else
    {
        NO;
        // cout << knowledge << endl;
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