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
    int n; cin >> n;
    vll a(n+1);
    for(int i = 1; i <= n; i++) cin >> a[i];

    vector<pair<int, int>> pairs(n+1);
    for(int i = 1; i <= n; i++) {
        pairs[i] = {a[i], i};
    }
    
    sort(pairs.begin()+1, pairs.end());
    
    vll next(n+1, 0);
    vll sum(n+1, 0);
    vll ans(n+1, 0);
    
    for(int i = 1; i <= n; i++) {
        if(next[i-1] >= i) {
            next[i] = next[i-1];
            sum[i] = sum[i-1];
        } else {
            sum[i] = sum[i-1] + pairs[i].first;
            next[i] = i;
            
            while(next[i]+1 <= n && sum[i] >= pairs[next[i]+1].first) {
                next[i]++;
                sum[i] += pairs[next[i]].first;
            }
        }
        
        ans[pairs[i].second] = next[i];
    }
    
    for(int i = 1; i <= n; i++) {
        cout << ans[i]-1 << " ";
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