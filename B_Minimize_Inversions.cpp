#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

void TheSlothThatCodes()
{
    long long len; cin >> len;
    vector<int> a, b, c;

    for (long long i = 0; i < len; i++)
    {
        int x; cin >> x;
        a.push_back(x);
        c.push_back(x);
    }

    for (long long i = 0; i < len; i++)
    {
        int x; cin >> x;
        b.push_back(x);
    }
    map<int, int> mp;

    for (int i = 0; i < len; i++)
    {
        mp[a[i]] = b[i];
    }
    
    sort(a.begin(), a.end());

    
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;


    for (int i = 0; i < len; i++)
    {
        cout << mp[a[i]] << " ";
    }

    cout << endl;
    


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