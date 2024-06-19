#include <iostream>
using namespace std;

int main()
{
    int query;
    cin >> query;
    string output_array[query];
    for (int i = 0; i < query; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (c % 2 == 0)
        {
            if (a > b)
            {
                output_array[i] = "First";
            }

            else
            {
                output_array[i] = "Second";
            }
            
        }

        else
        {
            if (b > a)
            {
                output_array[i] = "Second";
            }

            else
            {
                output_array[i] = "First";
            }
            
        }
        
    }

    for (int i = 0; i < query; i++)
    {
        cout << output_array[i] << endl;
    }
    

    return 0;
}