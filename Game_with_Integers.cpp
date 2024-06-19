#include<iostream>
using namespace std; 

int main()
{
    int cycles;
    cin >> cycles;
    while (cycles--)
    {
        int n;
        cin >> n;

        if (((n-1)%3 == 0)||((n+1)%3 == 0))
        {
            cout << "First" << "\n";
        }
        
        else
        {
            cout << "Second" << "\n";
        }
        
    }
    
    return 0;
}