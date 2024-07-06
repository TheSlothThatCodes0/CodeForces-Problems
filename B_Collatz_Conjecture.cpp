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
    int x, y, k; 
    cin >> x >> y >> k;

    if (x % y == 0)
    {
        x++;
        k--;
    }
    
    int nextMultiple = x + (y - x % y);
    cout << "nextMultiple: " << nextMultiple << endl;

    if (nextMultiple - x <= k) {
        // x = nextMultiple;
        int stepsLeft = k - (nextMultiple - x);

        cout << "stepsLeft: " << stepsLeft << endl;

        while (nextMultiple % y == 0) {
            nextMultiple /= y;
        }

        if (stepsLeft == 0)
        {
            cout << nextMultiple << endl;
            return;
        }

        cout << "x: " << nextMultiple << endl;

        nextMultiple += stepsLeft % abs(y-nextMultiple);

        cout << nextMultiple << endl;
        return;
    } else {
        x += k;
    }

    cout << x << endl;
}

void solve2()
{
    int x, y, k; cin >> x >> y >> k;

    if (x % y == 0)
    {
        x++;
        k--;
    }

    while (k > 0)
    {
        int nextMultiple = x + (y - x % y);

        if (x == 1)
        {
            int temp = (x + (k % y));
            if (temp % y == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << temp << endl;
            }
            
            return;
        }
        

        if (nextMultiple - x <= k) {
            k = k - (nextMultiple - x);
            x = nextMultiple;

            while (x % y == 0) {
                x /= y;
            }
        }

        

        else {
            x += k;
            k = 0;
            break;
        }
    }

    cout << x << endl;
    
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