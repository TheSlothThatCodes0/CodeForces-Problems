#include<iostream>
using namespace std; 

void solve()
{
    int a, b, c; cin >> a >> b >> c;

    if (b == 1)
    {
        cout << "NO" << endl;
        return;
    }

    if (b == 2 && c == 1 && (a%2 != 0))
    {
        cout << "NO" << endl;
        return;
    }

    if (b == 2 && c == 1 && (a%2 == 0))
    {
        cout << "YES" << endl << a/2 << endl;
        for (int  i = 0; i < a/2; i++)
        {
            cout << 2 << " ";
        }
        cout << endl;
        return;
    }

    if ( b== 2 && c == 2)
    {
        cout << "YES" << endl << a << endl;
        for (int  i = 0; i < a; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
        return; 
    }
    

    if ((b > 2) && (c != 1))
    {
        cout << "YES" << endl << a << endl;
        for (int  i = 0; i < a; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
        return; 
    }

    if ((b > 2) && (c == 1))
    {

        if (a % 2 == 0)
        {
            cout << "YES" << endl << a/2 << endl;
            for (int i = 0; i < a/2; i++)
            {
                cout << 2 << " ";
            }
            cout << endl;
            return;  
        }

        else
        {
            cout << "YES" << endl << a/2 << endl;
            for (int i = 0; i < a/2-1; i++)
            {
                cout << 2 << " ";
            }

            cout << 3 << endl;
            return;

        }
    } 
    
}

int main()
{
    int c; cin >> c;
    while (c--)
    {
        solve();
    }
    
    return 0;
}