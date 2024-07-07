#include<iostream>
#include<vector>
#include<algorithm>
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

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (i != j)
            {
                if (__gcd(lst[i],lst[j]) <= 2)
                {
                    cout << "YES" << endl;
                    return;
                }
            }
        }
        

    }

    cout << "NO" << endl;
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