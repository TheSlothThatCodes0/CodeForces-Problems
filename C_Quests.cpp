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

// ____________________________________________________________________________________________________________
// ____________________________________________________________________________________________________________


void TheSlothThatCodes()
{
    int n, k;   cin >> n >> k;
    vll a(n);
    vll b(n);
    vll maxi;
    vll sum;
    int temp_max = -1;
    int temp_sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        temp_sum += a[i];
        sum.pb(temp_sum);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        temp_max = max(temp_max, b[i]);
        maxi.pb(temp_max);
    }


   int ans = -1;

   for (int i = 0; i < min(n,k); i++)
   {
        int temp = sum[i] + maxi[i] * (k-i-1);
        ans = max(ans, temp);
   }


    cout << ans << endl;
    // cout << endl;
    

    
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