#include<iostream>
using namespace std; 

void solve()
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
        solve();
    }
    
     return 0;
}