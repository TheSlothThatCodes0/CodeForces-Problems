#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

void TheSlothThatCodes()
{
    int len; cin >> len;
    vector<int> lst;

    for (int i = 0; i < len; i++)
    {
        int x; cin >> x;
        lst.push_back(x);
    }
    
    int count  =0;

    for (int z = 0; z < len; z++)
    {
        for (int i = 0; i < lst.size()-1; i++)
        {
            if (lst[i] % 2 == lst[i+1] % 2 )
            {
                lst[i] == lst[i] * lst[i+1];
                lst.erase(lst.begin()+i+1);
                count++;
                break;
            }
            
        } 
    }

    cout << count << endl;
    
}

int main()
{
    int c; cin >>  c;
    while (c--)
    {
        TheSlothThatCodes();
    }
    
     return 0;
}