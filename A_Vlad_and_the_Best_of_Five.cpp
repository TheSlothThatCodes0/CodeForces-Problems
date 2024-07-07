#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define vll vector<long long>

void TheSlothThatCodes()
{
    string a; cin >> a;
    ll ca = 0, cb = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == 'A')
        {
            ca++;
        }

        else
        {
            cb++;
        }
         
    }

    if (ca > cb)
    {
        cout << "A" << endl;
        return;
    }

    cout << "B" << endl;
        return;
    
    
    
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