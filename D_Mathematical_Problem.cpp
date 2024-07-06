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

bool compareAsInts(const string& a, const string& b) {
    return stoi(a) < stoi(b);
}

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    vector<string> pairs;

    if (n == 2)
    {
        int ans = stoi(s);
        cout << ans << endl;
        return;
    }

    if (n == 3)
    {
        if (s[0] == '0' || s[2] == '0')
        {
            cout << 0 << endl;
            return;
        }
    }
    

    if(n != 3)
    {for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            cout << 0 << endl;
            return;
        }
    }}

    
    

    for (int i = 0; i < n-1; i++)
    {
        string pair(1, s[i]);
        pair += s[i+1];
        pairs.push_back((pair));
    }

    sort(pairs.begin(), pairs.end(), compareAsInts);
    auto newEnd = unique(pairs.begin(), pairs.end());
    pairs.erase(newEnd, pairs.end());

    string min_pair = pairs[0];

    // cout << "min_pair: " << min_pair << endl;

    int ans1 = 0;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == min_pair[0] && i != n-1)
        {
            if (s[i+1] == min_pair[1] && !found)
            {
                if (stoi(min_pair) == 1)
                {
                    if (ans1 == 0)
                    {
                        ans1++;
                    }
                    i++;
                    found = true;
                    continue;
                }
                else
                {
                    i++;
                    ans1 += stoi(min_pair);
                    found = true;
                    continue;
                }
            }
        }

        if (s[i] == '1')
        {
            continue;
        }
        
        ans1 += s[i] - '0';
        // cout << "ans: " << ans1 << endl;
    }

    int ans2 = 0;
    found = false;
    min_pair = pairs[1];

    for (int i = 0; i < n; i++)
    {
        if (s[i] == min_pair[0] && i != n-1)
        {
            if (s[i+1] == min_pair[1] && !found)
            {
                if (stoi(min_pair) == 1)
                {
                    if (ans2 == 0)
                    {
                        ans2++;
                    }
                    
                    i++;
                    found = true;
                    continue;
                }
                else
                {
                    i++;
                    ans2 += stoi(min_pair);
                    found = true;
                    continue;
                }
            }
        }

        if (s[i] == '1')
        {
            continue;
        }
        
        ans2 += s[i] - '0';
        // cout << "ans: " << ans2 << endl;
    }


    
    cout << min(ans1, ans2) << endl;
    // cout << "_____________________" << endl;
    
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