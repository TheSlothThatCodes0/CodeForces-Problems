    #include<iostream>
    #include<bits/stdc++.h>
    using namespace std; 

    #define ll long long
    #define YES cout << "YES" << endl
    #define NO cout << "NO" << endl
    #define vll vector<long long>
    #define endl "\n"
    #define int ll

    void TheSlothThatCodes()
    {
        ll len; cin >> len;
        vll lst;

        for (ll i = 0; i < len; i++)
        {
            ll x; cin >> x;
            lst.push_back(x);
        }

        if (len == 1)
        {
            cout << 0 << endl;
            return;
        }
        
        
        ll ans = INT_MIN;

        for (ll i = 1; i < len; i++)
        {
            ans = max(ans, (lst[i]-lst[0]));
        }

        for (ll i = 0; i < len-1; i++)
        {
            ans = max(ans, (lst[len-1]-lst[i]));
        }

        for (ll i = 1; i < len; i++)
        {
            ans = max(ans, (lst[i-1]-lst[i]));
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