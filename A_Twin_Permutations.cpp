#include<iostream>
#include<vector>
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
        cout << len - lst[i] + 1 << " ";
    }

    cout << endl;
    
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