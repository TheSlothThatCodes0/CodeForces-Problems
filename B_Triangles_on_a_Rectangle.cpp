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
    int w, h; cin >> w >> h;

    int k; cin >> k;
    vll x_0(k);
    for (int i = 0; i < k; i++)
    {
        cin >> x_0[i];
    }
    
    cin >> k;
    vll x_h(k);
    for (int i = 0; i < k; i++)
    {
        cin >> x_h[i];
    }

    cin >> k;
    vll y_0(k);
    for(int i = 0; i < k; i++)
    {
        cin >> y_0[i];
    }

    cin >> k;
    vll y_w(k);
    for (int i = 0; i < k; i++)
    {
        cin >> y_w[i];
    }

    int max_width_horizontal = max(x_0.back()-x_0[0], x_h.back()-x_h[0]) * h;
    int max_width_vertical = max(y_0.back()-y_0[0], y_w.back()-y_w[0]) * w;

    cout << max(max_width_horizontal, max_width_vertical) << endl;
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