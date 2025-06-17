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
    string l, r;
    cin >> l >> r;
    int d = l.size();

    if(l == r){
        cout << 2*d << endl;
        return;
    }

    int p = 0;
    while(p < d && l[p] == r[p]) ++p;

    int x = (r[p] - l[p] >= 2) ? 2*p : LLONG_MAX;

    int cl = 1; 
    for(int i = p+1; i < d; i++){
        if(l[i] == '9'){
            cl += 1; 
        } else {
            break;
        }
    }

    int cr = 1;
    for(int i = p+1; i < d; i++){
        if(r[i] == '0'){
            cr += 1;
        } else {

            break;
        }
    }

    int ans = min({ x, cl + 2*p, cr + 2*p });
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
        TheSlothThatCodes();
    }

    return 0;
}