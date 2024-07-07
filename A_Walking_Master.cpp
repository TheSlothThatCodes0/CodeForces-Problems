#include<iostream>
using namespace std; 

void TheSlothThatCodes()
{
    int a, b, x, y; cin >> a >> b >> x >> y;

    int moves = 0;

    if (y < b)
    {
        cout << -1 << endl;
        return;
    }
    
    else
    {
        moves += y - b;
        a += moves;
    }

    if (x > a)
    {
        cout << -1 << endl;
        return;
    }

    else
    {
        moves += (a - x);
    }

    cout << moves << endl;
 
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