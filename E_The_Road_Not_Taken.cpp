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

void depthFirstSearch(int node, int parent, map<int,vector<int>>& mp, int depth, int& level, int& distance) {
    if (depth > level) {
        distance = node;
        level = depth;
    }

    for (auto neighbor : mp[node]) {
        if (neighbor != parent) {
            depthFirstSearch(neighbor, node, mp, depth + 1, level, distance);
        }
    }
}


int calculateDiametere(map<int,vector<int>>& mp, int n) {
    int level = -1;
    int distance= 1;

    depthFirstSearch(1, -1, mp, 0, level, distance);
    level = -1;
    depthFirstSearch(distance, -1, mp, 0, level, distance);

    return level;
}

void TheSlothThatCodes()
{
    int n;
    cin>>n;
    map<int,vector<int>>mp;
    for(int i = 0; i < n - 1; ++i) {
        int a, b;
        cin >> a >> b;
        mp[a].pb(b);
        mp[b].pb(a);
    }
    int diameter = calculateDiametere(mp, n);
    int trips = 2 * (n - 1) - diameter;
    cout << trips << endl;

}

// ____________________________________________________________________________________________________________
// ____________________________________________________________________________________________________________


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int c;
    // cin >> c;
    // while (c--)
    // {
    //     solve();
    // }

    TheSlothThatCodes();

    return 0;
}