#include<iostream>
using namespace std; 

void TheSlothThatCodes()
{
    int a, b, c; cin >> a >> b>> c;

    if (a == b && c == b)
    {
        cout << "Yes" << endl;
        return;
    }
    

    if ((a - b - c) >= 2)
    {
        cout << "Yes" << endl;
        return;
    }
    
    cout << "No" << endl;
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