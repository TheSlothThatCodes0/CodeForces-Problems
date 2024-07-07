#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void TheSlothThatCodes()
{
    long long len_a, len_b;
    cin >> len_a >> len_b;

    vector<int> a, b;
    long long x;

    for (int i = 0; i < len_a; i++)
    {
        cin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < len_b; i++)
    {
        cin >> x;
        b.push_back(x);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<long long>());

    long long s_a = 0, e_a = len_a - 1, s_b = 0, e_b = len_b - 1, output = 0;

    while (s_a <= e_a)
    {
        if (abs((a[s_a] - b[e_b])) >= abs((a[s_a] - b[s_b])))
        {
            output += abs(a[e_a] - b[e_b]);
            e_a--;
            e_b--;
        }

        else
        {
            output += abs((a[s_a] - b[s_b]));
            s_a++;
            s_b++;
        }

        // if (s_a <= e_a)
        // {
        //     if (abs(a[e_a] - b[s_b]) > abs(a[e_a] - b[e_b]))
        //     {
        //         output += abs(a[e_a] - b[s_b]);
        //         e_a--;
        //         s_b++;
        //     }

        //     else
        //     {
        //         output += abs(a[e_a] - b[e_b]);
        //         e_a--;
        //         e_b--;
        //     }
        // }
    }

    cout << output << endl;
}

int main()
{
    int c;
    cin >> c;
    while (c--)
    {
        TheSlothThatCodes();
    }
    return 0;
}
