#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void TheSlothThatCodes()
{
    ll a, b, c; cin >> a >> b >> c;

    ll losses = 1;

    bool checker = true;

    for (ll i = 1; i < b; i++)
    {
        ll smallest_bet=  (losses/(a-1))+1;    
        losses += smallest_bet;

        if (losses >= c)
        {
            checker = false;
            break;
        }
        
    }

    ll coins_left = c - losses, coins_a_win = a * coins_left;

    if (coins_a_win > c && checker)
    {
        YES;
    }

    else
    {
        NO;
    }
    
    

    

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c; cin >> c;
    while (c--)
    {
        TheSlothThatCodes();
    }

    return 0;
}

