#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

void TheSlothThatCodes()
{
    int a,b,xk,yk,xq,yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;

    vector<pair<int,int>> king, queen;

    king.push_back({xk+b , yk+a});
    king.push_back({xk-b, yk+a});
    king.push_back({xk+b, yk-a});
    king.push_back({xk-b , yk - a});
    king.push_back({xk+a , yk+b});
    king.push_back({xk-a, yk+b});
    king.push_back({xk+a, yk-b});
    king.push_back({xk-a , yk - b});

    queen.push_back({xq+b , yq+a});
    queen.push_back({xq-b, yq+a});
    queen.push_back({xq+b, yq-a});
    queen.push_back({xq-b , yq - a});
    queen.push_back({xq+a , yq+b});
    queen.push_back({xq-a, yq+b});
    queen.push_back({xq+a, yq-b});
    queen.push_back({xq-a , yq - b});

    set<pair<int, int>> st;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (king[i] == queen[j])
            {
                st.insert(king[i]);
            }
            
        }
        
    }

    cout << st.size() << endl;

    // cout << "______________________" << endl;
    
    
}

int main()
{
    int c; cin >> c;
    while (c--)
    {
        TheSlothThatCodes();
    }
    
    return 0;
}