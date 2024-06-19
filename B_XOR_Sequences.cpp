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

bool isBitSet(int number, int i) {
    return (number & (1 << i)) != 0;
}

void solve()
{
    int a, b; cin >> a >> b;

    int track = 0;
    for (int i = 0; i < log2(max(a, b) + 1); i++)
    {
        track = i;
        if (isBitSet(a, i) == isBitSet(b, i))
        {
            continue;
        }

        else
        {
            break;
        }
    }
    cout << (int)(pow(2, track)) << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int c; cin >> c;
    while (c--)
    {
        solve();
    }
    
    return 0;
}