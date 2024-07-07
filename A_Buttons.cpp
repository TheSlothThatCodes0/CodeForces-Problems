#include<iostream>
using namespace std; 

void TheSlothThatCodes()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool was_even = false;

    if (c % 2 == 0)
    {
        was_even = true;
    }

    if (a == b)
    {
        if (was_even)
        {
            cout << "Second" << endl;
            return;
        }

        cout << "First" << endl;
        return;
        
    }

    if (a > b)
    {
        cout << "First" << endl;
        return;
    }

    cout << "Second" << endl;
    return;
    
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