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

bool isDivisibleByDigits(int num)
{
    int temp = num;
    while (temp > 0)
    {
        int digit = temp % 10;
        if (digit != 0 && num % digit != 0)
        {
            return false;
        }
        temp /= 10;
    }
    return true;
}

int lcmOfDigits(int num)
{
    int result = 1;
    while (num > 0)
    {
        int digit = num % 10;
        if (digit != 0)
        {
            result = lcm(result, digit);
        }
        num /= 10;
    }
    return result;
}

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll start = 1;
    ll end = m;
    while (start <= end)
    {
        ll mid = start + (end - start) / 2, x = 0, temp = 0, counter = mid, leftIndex = mid - 1, rightIndex = mid - 1 ;

        if (k - 1 <= mid - 1)
        {
            counter += ((k - 1) * (2 * (mid - 1) + ((k - 2) * (-1LL)))) / 2;
        }
        else
        {
            counter += ((mid - 1) * (mid)) / 2;
            counter += (k - mid);
        }
        if (n - k <= mid - 1)
        {
            counter += ((n - k) * (2 * (mid - 1) + ((n - k - 1) * (-1LL)))) / 2;
        }
        else
        {
            counter += ((mid - 1) * (mid)) / 2;
            counter += (n - k - mid + 1);
        }
        if (counter <= m && counter >= n)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << end << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout << stoi("01");
    return 0;
}