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


void TheSlothThatCodes()
{
    int p1, p2, p3; cin >> p1 >> p2 >> p3;

    if((p1+p2+p3) % 2 != 0)
    {
        cout << -1 << endl;
        return;
    }

    int ans = 0;

    if (p3 >= p1 + p2)
    {
        cout << p1 + p2 << endl;
        return;
    }
    
    else
    {
        cout << p3 + (p1 + p2 - p3) / 2 << endl;
    }
    

    // while (p1 != 0 && p2 != 0 && p3 != 0)
    // {
    //     if (p1 != 0 && p3 != 0)
    //     {
    //         p1--;
    //         p3--;
    //         ans++;
    //     }

    //     if (p2 != 0 && p3 != 0)
    //     {
    //         p2--;
    //         p3--;
    //         ans++;
    //     }
    //     else
    //     {
    //         break;
    //     }
        
    //     if (p1 != 0 && p2 != 0)
    //     {
    //         p1--;
    //         p2--;
    //         ans++;
    //     } 
    //     else
    //     {
    //         break;
    //     }
        
    // }

    // if (p1 == 0)
    // {
    //     ans += min(p2, p3);
    // }

    // if (p2 == 0)
    // {
    //     ans += min(p1, p3);
    // }

    // if (p3 == 0)
    // {
    //     ans += min(p1, p2);
    // }

    // cout << ans << endl;
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