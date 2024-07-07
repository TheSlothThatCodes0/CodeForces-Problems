#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void TheSlothThatCodes()
{
    ll a; cin >> a;

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            for (int k = 0; k < 26; k++)
            {
                if (i + j + k + 3 == a)
                {
                    cout << char('a' + i) << char('a' + j) << char('a'+k) << endl;
                    return;
                }
                
            }
            
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