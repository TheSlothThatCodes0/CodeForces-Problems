#include<iostream>
using namespace std; 

void TheSlothThatCodes()
{
    string x; cin >> x;
    int output = 0;

    for (int i = 0; i < x.size()-1; i++)
    {
        output+= 9;
    }

    output += x[0] - '0';

    cout << output << endl;
    
    
}

int main()
{
    int c; cin >> c;
    while (c--)
    {
        TheSlothThatCodes();
    }
    
     return 0;
}