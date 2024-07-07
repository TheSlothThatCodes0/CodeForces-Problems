#include<iostream>
#include<algorithm>
#include<vector>
using namespace std; 


void TheSlothThatCodes()
{
    int x, y;
    cin >> x >> y;
    vector<int> lst;
    bool found = false;

    for (int i = 0; i < x; i++)
    {
        int temp = 0;
        cin >> temp;
        if (temp == y)
        {
            found = true;
        }
    }

    if (found == true)
    {
        cout << "YES" << "\n";
    }
    
    else
    {
        cout << "NO"<< "\n";
    }
    
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