#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

void TheSlothThatCodes()
{
    int len; cin >> len;
    string inp; cin >> inp;
    char target = inp[0];
    int temp = 0, longest = 0;
    for (int i = 0; i < len; i++)
    {
        if (inp[i] == target)
        {
            temp++;
            longest = max(longest, temp);
        }

        else
        {
            temp = 1;
            target = inp[i];
        } 
    }

    cout << longest + 1 << endl; 
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