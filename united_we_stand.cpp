#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool descendingOrder(int a, int b) 
{
    return a > b;
}

int main() {
    int query_no;
    cin >> query_no;

    for (int i = 0; i < query_no; i++) 
    {
        int length_input;
        cin >> length_input;
        int input_array[length_input];

        for (int index = 0; index < length_input; index++) 
        {
            cin >> input_array[index];
        }

        sort(input_array, input_array + length_input, descendingOrder);

        vector<int> list_c;
        bool list_equal_check = true;

        for (int outer_index = 0; outer_index < length_input - 1; outer_index++) 
        {
            if (input_array[outer_index] != input_array[outer_index + 1]) 
            {
                list_equal_check = false;
            }
        }

        if (list_equal_check == true) {
            cout << -1;
        } else {
            for (int outer_index = 0; outer_index < length_input; outer_index++) 
            {
                if (input_array[outer_index] % input_array[0] == 0) 
                {
                    list_c.push_back(input_array[outer_index]);
                }
            }

            vector<int> list_b;
            for (int i : list_c) {
                for (int outer_index = 0; outer_index < length_input; outer_index++) 
                {
                    if (i != input_array[outer_index]) 
                    {
                        list_b.push_back(input_array[outer_index]);
                    }
                }
            }

            cout << list_c.size() << " " << list_b.size() << endl;

            for (int i : list_c) 
            {
                cout<< i << " ";
            }

            cout << endl;

            for (int i : list_b) 
            {
                cout << i << " ";
            }
        }
    }

    return 0;
}
