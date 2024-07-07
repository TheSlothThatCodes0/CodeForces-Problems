#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void TheSlothThatCodes()
{
    ll a, b, c;
    cin >> a >> b >> c;

    ll new_a = b - (c - b);
    if (new_a >= a && new_a % a == 0 && new_a != 0)
    {
        YES;
        return;
    }

    ll new_b = a + (c - a) / 2;
    if (new_b >= b && (c - a) % 2 == 0 && new_b % b == 0 && new_b != 0)
    {
        YES;
        return;
    }

    ll new_c = a + 2 * (b - a);
    if (new_c >= c && new_c % c == 0 && new_c != 0)
    {
        YES;
        return;
    }

    NO;
    return;
}

int main()
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