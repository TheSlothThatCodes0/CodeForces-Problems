#include<iostream>
using namespace std; 

void TheSlothThatCodes()
{
    int n, sum = 0;
    cin >> n;
    

    for (int i = 0; i < n-1; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }

    cout << -sum << endl;
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