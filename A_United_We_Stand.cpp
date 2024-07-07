#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

void TheSlothThatCodes()
{
    int len;
    cin >> len;
    vector<int> lst, o1, o2;

    for (int i = 0; i < len; i++)
    {
        int x;
        cin >> x;
        lst.push_back(x);
    }

    int max = INT8_MIN;
    
    bool all_same = true;

    for (int i = 0; i < len-1; i++)
    {
        if (lst[i] != lst[i+1])
        {
            all_same = false;
            break;
        }   
    }

    if (all_same)
    {
        cout << -1 << endl;
        return;
    }
    
    
    for (int i :lst)
    {
        if (i > max)
        {
            max = i;
        }
    }

    for (int i : lst)
    {
        if (i == max)
        {
            o2.push_back(i);
            continue;
        }

        o1.push_back(i);
    }
    
    
    cout << o1.size() << " " << o2.size() << endl;

    for (int i : o1)
    {
        cout << i << " ";
    }

    cout << endl;

    for (int i : o2)
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