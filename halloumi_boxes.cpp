#include<iostream>
using namespace std; 
int main()
{
    int no_cycles;
    cin >> no_cycles;

    while (no_cycles--)
    {
        int len_list, k;
        cin >> len_list >> k;
        bool is_sorted = true;
        int first, second = INT16_MIN;
        
        while (len_list--)
        {
            cin >> first;
            if (second > first)
            {
                is_sorted = false;
            }

            second = first;
        }

        if (k > 1)
        {
            cout << "YES" << "\n";;
        }

        else
        {
            if (is_sorted)
            {
                cout << "YES" << "\n";
            }

            else
            {
                cout << "NO" << "\n";
            }     
            
        }   

    }
 
    return 0;
}
