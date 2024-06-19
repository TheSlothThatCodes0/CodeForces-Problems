#include<iostream>
#include<vector>
using namespace std; 

void solve()
{
    int len; cin >> len;
    int count_2 = 0;
    vector<int> lst;

    for (int i = 0; i < len; i++)
    {
        int x; cin >> x;
        lst.push_back(x);

        if (x == 2)
        {
            count_2++;
        }
        
    }

    if (count_2 % 2 != 0)
    {
        cout << -1 << endl;
        return;
    }

    if (count_2 == 0)
    {
        cout << 1 << endl;
        return;
    }
    
    
    int count = 0;

    for (int i = 0; i < len; i++)
    {
        if (lst[i] == 2)
        {
            count ++;

            if (count == count_2/2)
            {
                cout << i+1 << endl;
                return;
            }
            
        }
        
        
    }
    
    
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