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

    for (int i = 0; i < 6; i++)
    {
        
        if (s.find(x) == string::npos)
        {
            x += x;
            output++;
        }

        else
        {
            return output;
            break;
        }
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