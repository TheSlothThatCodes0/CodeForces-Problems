#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

void TheSlothThatCodes()
{
    long long n; cin >> n;

    if (n==1)
    {
        cout << 1 << endl;
        return;
    }

    if (n ==2)
    {
        cout << 2 << endl;
        return;
    }

    for (long long i = 1; i < n; i++)
    {
        if (n%i != 0)
        {
            cout << i-1 << endl;
            return;
        }    
    }
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