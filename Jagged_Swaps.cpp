#include <iostream>
#include <vector>
using namespace std;

string solve(int len)
{
    vector<int> lst(len);
    for (int i = 0; i < len; i++)
    {
        int input;
        cin >> input;
        lst[i] = input;
    }

    for (int i = 0; i < len; i++)
    {
        for (int i = 1; i < len - 1; i++)
        {
            if (lst[i] < lst[i - 1])
            {
                return "NO";
            }

            // if (lst[i - 1] > lst[i + 1])
            // {
            //     return "NO";
            // }

            if ((lst[i] > lst[i + 1]) && (lst[i] > lst[i - 1]))
            {
                int x = lst[i];
                lst[i] = lst[i + 1];
                lst[i + 1] = x;
            }
        }

        
    }
    
    return "YES";
}

int main()
{
    int cycles;
    cin >> cycles;
    while (cycles--)
    {
        int len;
        cin >> len;
        cout << solve(len) << "\n";
    }

    return 0;
}