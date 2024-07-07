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
    char c; cin >> c;
    string s; cin >> s;
    
    s+= s;
    int start = -1, ans = 0;
    for (int i = 0; i < 2*n; i++)
    {
        if (start == -1 && s[i] == c)
        {
            start = i;
        }

        if (s[i] == 'g' && start != -1)
        {
            ans = max(ans, i-start);
            start = -1;
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