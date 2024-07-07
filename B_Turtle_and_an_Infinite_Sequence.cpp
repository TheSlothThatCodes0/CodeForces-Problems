#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define vll vector<long long>
#define endl "\n"
#define int ll
#define pb push_back

bool isBitSet(int n, int i) {
    return (n & (1 << i)) != 0;
}

int setBit(int n, int i) {
    return n | (1 << i);
}

void TheSlothThatCodes()
{
    int n, t; cin >> n >> t;
    int ans = n;

    for (int i = 0; i < 30; i++)
    {
        if (!isBitSet(n, i))
        {
            int forward = 0, backward = 0;

            while (forward <= min(t, i+1) && !isBitSet(n+forward, i))
            {
                forward++;
            }

            while (backward <= min(t, i+1) && n-backward >= 0 && !isBitSet(n-backward, i))
            {
                backward++;
            }
            
            if (forward <= min(t, i+1) || (backward <= min(t, i+1) && n))
            {
                ans = setBit(ans, i);
            }
            else
            {
                break;
            }
        }
    }

    cout << ans << endl;
}

int32_t main()
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
