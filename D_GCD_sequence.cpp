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
    int n; cin >> n;
    vll a(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vll gcd;
    vll a1 = a;
    vll a2 = a;

    for (int i = 0; i < n-1; i++)
    {
        gcd.pb(__gcd(a[i], a[i+1]));
    }

    int target1 = -1;
    int target2 = -1;

    for (int i = 0; i < gcd.size()-1; i++)
    {

        if (gcd[i] > gcd[i+1])
        {
            target1 = i+2;
            target2 = i;
            a1.erase(a1.begin() + target1);
            a2.erase(a2.begin() + target2);

            break;
        }
    }

    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout << a[i] << " ";
    // }

    // cout << endl;
    
    vll new_gcd1;
    vll new_gcd2;

    if (target1 == -1)
    {
        YES;
        return;
    }

    else
    {
        for (int i = 0; i < a1.size()-1; i++)
        {
            new_gcd1.pb(__gcd(a1[i], a1[i+1]));
            new_gcd2.pb(__gcd(a2[i], a2[i+1]));
        }
    }
    
    bool trigger1 = true;
    bool trigger2 = true;

    for (int i = 0; i < new_gcd1.size()-1; i++)
    {
        if (new_gcd1[i] > new_gcd1[i+1])
        {
            trigger1 = false;
            break;
        }
    }

    for (int i = 0; i < new_gcd2.size()-1; i++)
    {
        if (new_gcd2[i] > new_gcd2[i+1])
        {
            trigger2 = false;
            break;
        }
    }
    
    if (trigger1 || trigger2)
    {
        YES;
    }

    else
    {
        NO;
    }

         
    
    
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