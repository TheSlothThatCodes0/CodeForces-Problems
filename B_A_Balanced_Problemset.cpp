#include<iostream>
using namespace std; 

void TheSlothThatCodes()
{
    long long x, n; cin >> x >> n;
    long long ans = 1;

    for (long long i = 1; i < x+1; i++)
    {
        if (x/i < n)
        {
            break;
        }

        if (x % i == 0 && x/i >= n)
        {
            ans = i;
        }
        
    }

    cout << ans << endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c; cin >> c;
    while (c--)
    {
        TheSlothThatCodes();
    }
    
    return 0;
}