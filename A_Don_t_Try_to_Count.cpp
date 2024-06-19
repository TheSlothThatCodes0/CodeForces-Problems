#include<iostream>
#include <string>
using namespace std; 

int solve()
{
    int len_x, len_s;
    cin >> len_x >> len_s;
    string x ,s;
    cin >> x >> s;
    int output = 0;

    for (int i = 0; i < 10; i++)
    {
        
        if (x.find(s) != string::npos)
        {
            return i;
        }

        x += x;
    }
    
    return -1;
}

int main()
{
    int cycles;
    cin >> cycles;
    while (cycles--)
    {
        cout << solve() << "\n";
    }
    return 0;
}