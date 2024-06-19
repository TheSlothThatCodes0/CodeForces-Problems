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
    int n; cin >> n;
    string s; cin >> s;

    vll cons;
    vll visited(26, 0);
    int temp = 0;

    for (int i = 0; i <n; i++)
    {
        if (visited[s[i] - 'a'] == 0)
        {
            visited[s[i] - 'a'] = 1;
            cons.pb(++temp);
        }
        else
        {
            cons.pb(temp);
        }
    }

    int break_point = 0;
    for (int i = 1; i < n; i++)
    {
        if (cons[i] == cons[i-1])
        {
            break_point = i;
            break;
        }
    }

    int ans = 0;
    visited = vll(26, 0);
    for (int i = 0; i < break_point; i++)
    {
        if (visited[s[i] - 'a'] == 0)
        {
            visited[s[i] - 'a'] = 1;
            ans++;
        }
    }

    
    visited = vll(26, 0);
    for (int i = break_point; i < n; i++)
    {
        if (visited[s[i] - 'a'] == 0)
        {
            visited[s[i] - 'a'] = 1;
            ans++;
        }
    }
    
    cout << ans << endl;
    
}

void solve2()
{
    int n; cin >> n;
    string s; cin >> s;

    vll front;
    vll back;
    vll visited(26, 0);

    int unique = 0;
    for (int i = 0; i < n; i++)
    {
        if (visited[s[i] - 'a'] == 0)
        {
            visited[s[i] - 'a'] = 1;
            front.pb(++unique);
        }
        else
        {
            front.pb(unique);
        }
    }

    visited = vll(26, 0);
    unique = 0;
    for (int i = n-1; i >= 0; i--)
    {
        if (visited[s[i] - 'a'] == 0)
        {
            visited[s[i] - 'a'] = 1;
            back.pb(++unique);
        }
        else
        {
            back.pb(unique);
        }
    }

    reverse(back.begin(), back.end());

    // cout << "front: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << front[i] << " ";
    // }
    // cout << endl;

    // cout << "back: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << back[i] << " ";
    // }
    // cout << endl;
    
    
    int ans = INT_MIN;
    for (int i = 0; i < n-1; i++)
    {
        ans = max(ans , front[i] + back[i+1]);
    }
    
    cout << ans  << endl;
    
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