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
int findClosestEntry(const std::vector<int> &land, int i)
{
    int left = 0;
    int right = land.size() - 1;
    int mid;
    int closest = land[0];

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        // Update closest if the current mid is closer to 'i'
        if (std::abs(land[mid] - i) < std::abs(closest - i))
        {
            closest = land[mid];
        }

        if (land[mid] < i)
        {
            left = mid + 1;
        }
        else if (land[mid] > i)
        {
            right = mid - 1;
        }
        else
        {
            // If 'i' is found in 'land', it is the closest
            return land[mid];
        }
    }

    // Return the closest found
    return closest;
}

void TheSlothThatCodes()
{

    int n, jump, swim;
    cin >> n >> jump >> swim;
    string s;
    cin >> s;
    int l_jumps = jump - 1, l_swims = 0;
    bool flag = false;
    for (auto i = 0; i < s.size(); i++)
    {
        char action = s[i];
        if (action == 'L')
        {
            l_jumps = jump;
        }
        else if (action == 'W')
        {
            if (l_jumps <= 0)
                l_swims++;
        }
        else
        {
            if (l_jumps <= 0)
            {
                NO;
                return;
            }
        }
        l_jumps--;
    }

    if (l_swims > swim)
        flag = true;

    if (flag)
    {
        NO;
    }
    else
    {
        YES;
    }
    

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
