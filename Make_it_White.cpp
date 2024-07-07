#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long

void TheSlothThatCodes()
{
    ll len; cin >> len;
    string s; cin >> s;

    ll start = 0, end = len-1;

    for (ll i = 0; i < len; i++)
    {
        if (start >= end)
        {
            break;
        } 
        if (s[start] == 'B')
        {
        }
        else
        {
            start++;
        }

        if (s[end] == 'B')
        {
        }
        else
        {
            end--;
        }
    }

    if (start > end)
    {
        cout << 0 << endl;
        return;
    }

    if (start == end)
    {
        cout << 1 << endl;  
        return;
    }

    cout << end - start + 1 << endl;


    


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