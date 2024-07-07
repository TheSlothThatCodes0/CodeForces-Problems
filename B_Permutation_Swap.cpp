#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

void TheSlothThatCodes()
{
    int n; cin >> n;
    vector<int> a;

    for(int i = 0; i < n; i++)
    {
        int temp; cin >> temp;
        a.push_back(temp);
    }

    int ans = 0;

    for(int i = 1; i <= n; i++)
    {
        if(abs(a[i-1] - i) != 0)
        {
            ans = __gcd(ans, abs(a[i-1] - i));
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