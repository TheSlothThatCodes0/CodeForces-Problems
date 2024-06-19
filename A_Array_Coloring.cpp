#include<iostream>
#include<vector>
using namespace std;

void solve()
{
    int len;
    cin >> len;
    vector<int> lst;

    for (int i = 0; i < len; i++)
    {
        int x;
        cin >> x;
        lst.push_back(x);    
    }

    int sum = 0;

    for (int i : lst)
    {
        sum += i;
    }

    if (sum % 2 == 0)
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    } 
    
}

int main()
{
    int c;
    cin >> c;
    while (c--)
    {
        solve();
    }
    
     return 0;
}