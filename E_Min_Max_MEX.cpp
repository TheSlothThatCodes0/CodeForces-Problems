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

bool possible(int mid, vector<long long>& v, int k) {
    int n = v.size();
    if(mid == 0) return true; 

    vector<int> freq(mid, 0);
    int x = 0;
    int y = 0;
    
    for (int i = 0; i < n; i++) {
        if (v[i] < mid) {
            if (freq[v[i]] == 0) {
                x++;
            }
            freq[v[i]]++;
        }
        if (x == mid) {
            y++;
            if(y >= k)
                return true;
            fill(freq.begin(), freq.end(), 0);
            x = 0;
        }
    }
    return false;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vll v(n);
    
    for (int i = 0; i < n; i++) 
        cin >> v[i];

    vector<bool> found(n+2, false);
    for (int i = 0; i < n; i++) {
        if (v[i] < n+2)
            found[v[i]] = true;
    }

    int maxi = 0;
    while (maxi < n+2 && found[maxi])
        maxi++;
    
    int left = 0, right = maxi, ans = 0;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (possible(mid, v, k)) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
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