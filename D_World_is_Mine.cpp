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


void solve()
{
    int n; cin >> n;

    vll a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    

    sort(a.begin(), a.end());

    for(auto i: a)
    {
        cout << i << " ";
    }
    cout << endl;



    int alice = 0, bob = a.size()-1;

    int ans = 0, tracker = INT_MIN;
    while (alice < bob) {
        while(a[alice] <= tracker && alice < bob) {
            alice++;
        }
        if (alice < bob) {
            ans++;
            tracker = a[alice];
        }
        else
        {
            break;
        }

        bob--;
        cout << "Alice: " << alice << " Bob: " << bob << " Ans: " << ans << endl;
    }

    cout << ans << endl;

    cout << "________________________________" << endl;
    
}

void solve2()
{
    int n; cin >> n;
    vll a(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }

    set<int> s(a.begin(), a.end());
    vll arr(s.begin(), s.end());

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = mp[arr[i]];
    }

    // for(auto i: arr)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;


    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] <= i)
        {
            ans++;
        }
        
    }

    cout <<( ans == 0 ? 1 : ans)<< endl;
    
    
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
        solve2();
    }

    return 0;
}