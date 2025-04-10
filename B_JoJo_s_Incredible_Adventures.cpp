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

int checkAndIncrement(double x) {
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
    string s; cin >> s;

    set<char> st(s.begin(), s.end());
    if (st.size() == 1)
    {
        if (*st.begin() == '0')
        {
            cout << 0 << endl;
            return;
        }
        else
        {
            cout << s.size() * s.size() << endl;
            return;
        }
        
    }
    


    int count = 0;
    int temp = 0;
    s += s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            temp ++;
            count = max(count, temp);
        }
        else
        {
            temp = 0;
        }
    }
    // cout << "count : " << count << endl;
    int x = (count + 1) % 2 == 0 ? (count+1)/2 : (count+1)/2 + 1;
    int ans =  x * (int)((count+ 1)/2);
    cout <<  ans << endl;
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