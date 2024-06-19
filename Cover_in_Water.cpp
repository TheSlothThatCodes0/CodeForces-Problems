#include <iostream>
using namespace std;

int main()
{
    int cycles;
    cin >> cycles;

    while (cycles--)
    {
        int string_len;
        cin >> string_len;
        string input;
        cin >> input;

        int dot_count = 0;
        int consecutive_dots = 0;
        bool is_three = false;

        for (int i = 0; i < string_len; i++)
        {
            if (input[i] == '.')
            {
                consecutive_dots++;
                if (consecutive_dots >= 3)
                {
                    is_three = true;
                    break;
                }
            }
            else
            {
                if (consecutive_dots > 0)
                {
                    dot_count += consecutive_dots;
                    consecutive_dots = 0;
                }
            }
        }

        if (is_three)
        {
            cout << 2 << "\n";
        }
        else
        {
            cout << dot_count << "\n";
        }
    }

    return 0;
}
