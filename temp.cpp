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

bool isDivisibleByDigits(int num) {
    int temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit != 0 && num % digit != 0) {
            return false;
        }
        temp /= 10;
    }
    return true;
}

int lcmOfDigits(int num) {
    int result = 1;
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0) {
            result = lcm(result, digit);
        }
        num /= 10;
    }
    return result;
}


int32_t main() {
    int x = lcm(1+381, 1+381*2);
    cout << lcm(x, 1+3*381) << endl;
    
}