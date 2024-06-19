#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

void solve()
{
    int len; cin >> len;
    vector<int> lst;

    for (int i = 0; i < len; i++)
    {
        int x; cin >> x;
        lst.push_back(x);
    }

    sort(lst.begin(), lst.end(), greater<int>());

    bool is_same = true;

    for (int i = 0; i < len-1; i++)
    {
        if (lst[i] != lst[i+1])
        {
            is_same = false;
        }
        
    }
    

    if ((lst[0] == lst[1]) && (!is_same) && (len > 2))
    {
        int x;
        x = lst[len-1];
        lst[len-1] = lst[1];
        lst[1] = x;
    }

    if (is_same)
    {
        cout << "NO" << endl;
        return;
    }


    cout << "YES" << endl;

    for (int i :lst)
    {
        cout << i << " ";
    }

    cout << endl;
    
}

int main()
{
    int c; cin >> c;
    while (c--)
    {
        solve();
    }
    
     return 0;
}