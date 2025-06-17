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

int checkAndIncrement(int x)
{
    if (x - floor(x) > 0)
    {
        return x + 1;
    }
    else
    {
        return x;
    }
}

vector<long long> primeFactors(long long n)
{
    vector<long long> factorization;
    for (long long d = 2; d * d <= n; d++)
    {
        while (n % d == 0)
        {
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
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            maxi = max(maxi, arr[i][j]);
        }
    }
    vector<pair<int, int>> pos;
    unordered_map<int, int> fre;
    unordered_set<int> r_st, c_st;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == maxi)
            {
                r_st.insert(i);
                c_st.insert(j);
                pos.push_back({i, j});
                fre[j]++;
            }
        }
    }

    int x = fre.size();

    bool flag = false;

    if (r_st.size() <= 1 || c_st.size() <= 1)
    {
        flag = true;
    }
    
    else
    {
        for (int i : r_st)
        {
            int elim = 0;
            for (auto &p : pos)
            {
                if (p.first == i && fre[p.second] == 1)
                    elim++;
            }
            if (elim >= x - 1)
            {
                flag = true;
                break;
            }
        }
    }
    cout << (flag ? maxi - 1 : maxi) << "\n";
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