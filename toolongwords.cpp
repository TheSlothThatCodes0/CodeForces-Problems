#include<iostream>
#include<string>
using namespace std; 

int main()
{
    int query_number;
    cin >> query_number;
    
    string input_array[query_number];

    for (int i = 0; i < query_number; i++)
    {
        cin >> input_array[i] ;
    }
    
    for (int i = 0; i < query_number; i++)
    {   
        int length = input_array[i].length();
        if (length > 10)
        {
            cout << input_array[i][0] << length-2 << input_array[i][length-1] << endl;
        }

        else
        {   
            cout << input_array[i] << endl;
        }
        
    }
    
     return 0;
}