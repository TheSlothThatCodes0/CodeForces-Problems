#include<iostream>
#include<vector>
using namespace std; 

void TheSlothThatCodes()
{
    int len;
    cin >> len;
    vector<int> in_lst, out_lst;

    for (int i = 0; i < len; i++)
    {
        int x;
        cin >> x;
        in_lst.push_back(x);
    }

    out_lst.push_back(in_lst[0]);

    for (int i = 1; i < len; i++)
    {
        if (in_lst[i] >= in_lst[i-1])
        {
            out_lst.push_back(in_lst[i]);
            continue;
        }

        else
        {
            if (in_lst[i] == 1)
            {
                out_lst.push_back(in_lst[i]);
            }
            
            else
            {
                out_lst.push_back((in_lst[i]-1));
            }
            out_lst.push_back(in_lst[i]);
        } 
    }

    cout << out_lst.size() << endl;
    for (int i : out_lst)
    {
        cout << i << " ";
    }
    
    cout << endl;
}

int main()
{
    int c;
    cin >> c;
    while (c--)
    {
        TheSlothThatCodes();
    }
    
     return 0;
}