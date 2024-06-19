#include<iostream>
#include<map>
using namespace std; 


void solve()
{
    int a, b, c; cin >> a >> b>> c;
    string s; cin >> s;

    map<char, int> mp;
    string output = "";

    if (/* condition */)
    {
        /* code */
    }
    
    
    for (int i = 0; i < c/a; i++)
    {
        char temp = 'a';
        for (int k = 0; k < b; k++)
        {
            mp[temp++] = 0;
        }

        for (int j = 0; j < a; j++)
        {
            mp[s[c/a*i + j]]++;
        }


        for (const auto &pair : mp)
        {
            if (pair.second == 0)
            {
                output += pair.first;
            }
        }
    }

    if (output.size() == 0)
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
        cout << output << endl;
        
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