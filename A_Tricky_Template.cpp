#include<iostream>
using namespace std; 

void TheSlothThatCodes()
{
    int a;
    cin >> a;
    string x,y,z;

    cin >> x >> y >> z;

    for (int i = 0; i < a; i++)
    {
        if ((x[i] != z[i]) && (y[i] != z[i]))
        {
            cout << "YES" << endl;
            return;
        }
        
    }
    
    // if (count >= 0)
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    cout << "NO" << endl;
    // }
    
    // cout << "YES" << endl;
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