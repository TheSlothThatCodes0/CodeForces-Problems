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


void solve()
{
    int n, k; cin >> n >> k;
    
    vll a(n, -1);
    int x = k;
    bool flag = false;

    if (k%2 != 0)
    {
        NO;
        // cout << endl;
        return;
    }
    

    int back = n;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != -1)
        {
            // NO;
            // return;
            continue;
        }

        if (x == 0)
        {
            break;
        }

        int diff = back-i-1;
        // cout << "diff: " << diff << endl;
        if (x < 2*diff)
        {
            continue;
        }
        
        a[i] = i+diff+1;
        a[i+diff] = i+1;
        if (i+diff+1 == back)
        {
            back--;
        }
        

        x -= 2*diff;
    }

    // for(int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    
    if (x != 0)
    {
        NO;
        return;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] == -1)
        {
            a[i] = i+1;
        }
    }

    
    YES;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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
        solve();
    }

    return 0;
}