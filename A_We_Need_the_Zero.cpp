#include<iostream>
using namespace std; 

void TheSlothThatCodes()
{
    int len;
    cin >> len;

    int a_xor = 0;

    for (int i = 0; i < len; i++)
    {
        int x; cin >> x;
        a_xor = a_xor ^ x;
    }

    if (a_xor == 0)
    {
        cout << 0 << endl; return;

    }

    else
    {
        if (len % 2 != 0)
        {
            cout << a_xor << endl; return;
        }

        cout << -1 << endl; return;
        
    }
    
    

    // cout << -1 << endl;
    
}

int main()
{
    int c;cin >> c;
    while (c--)
    {
        TheSlothThatCodes();
    }
    
     return 0;
}