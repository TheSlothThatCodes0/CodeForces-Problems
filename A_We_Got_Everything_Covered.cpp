#include<iostream>
#include<string>
using namespace std; 

void solve()
{
    long long n, k; cin >> n >>k;

    char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    string s = "";
    char ch = 'a';

    while (k--)
    {
        s += ch;
        ch++;
    }

    string ans = "";
    while (n--)
    {
        ans += s;
    }

    cout << ans << endl;
    

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