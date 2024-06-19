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


void solve()
{
    // cout << "_______________________" << endl;
    int n,k,b,s; cin >> n >> k >> b >> s;
    vll a(n, 0);

    // if (s == k * b)
    // {
    //     a[0] = s;
    //     for(auto i: a)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    //     return;
    // }
    
    for (int i = 0; i < n; i++)
    {
        if (b <= 0)
        {
            break;
        }
        if(b % n-i == 0)
        {
            a[i] = (b/(n-i))*k;
            b -= b/(n-i);
        }
        else
        {
            a[i] = (b/(n-i) + 1)*k;
            b -= b/(n-i) + 1;
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        
    }

    // cout << "sum: " << sum << endl;

    if (sum > s)
    {
        cout << -1 << endl;
        return;
    }

    // cout << "k-1*n: " << (k-1)*n << endl;
    if (s - sum > (k-1)*n)
    {
        cout << -1 << endl;
        return;
    }
    
    int x = s - sum;
    for (int i = 0; i < n; i++)
    {
        if (x < k)
        {
            a[i]+= x;
            break;
        }
        else
        {
            a[i] += k-1;
            x -= k-1;
        }
    }

    for(auto i: a)
    {
        cout << i << " ";
    }

    cout << endl;
}

void solve2()
{
    int n,k,b,s; cin >> n >> k >> b >> s;
    
    int mini = b * k;
    int maxi = b * k + (k-1)*n;

    if (s > maxi || s < mini)
    {
        cout << -1 << endl;
        return;
    }
    
    vll a(n, 0);
    a[0] = b*k;
    int sum = a[0];
    for (int i = 0; i < n; i++)
    {
        if (sum == s)
        {
            break;
        }
        else
        {
            a[i] += min(k-1, s-sum);
            sum += min(k-1, s-sum);
        }
    }
    
    for(auto i: a)
    {
        cout << i << " ";
    }
    cout << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int c; cin >> c;
    while (c--)
    {
        solve2();
    }
    
    return 0;
}