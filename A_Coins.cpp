#include<iostream>
using namespace std; 

void solve()
{
    long long n, k;
    cin >> n >> k;

    if (n % 2 == 0)
    {
        cout << "YES" << endl;
        return;
    }

    if (((n-k) % 2 == 0) && ((n-k) >= 0))
    {
        cout << "YES" << endl;
        return;  
    }
    
    cout << "NO" << endl;
    return;
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