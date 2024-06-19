#include<iostream>
using namespace std; 

int main()
{
    int user_input;
    cin >> user_input;

    if(user_input == 2)
    {
        cout << "NO";
    }

    else if (user_input % 2 == 0)
    {
        cout << "YES";
    }
    
    else {
        cout << "NO";
    }
     return 0;
}