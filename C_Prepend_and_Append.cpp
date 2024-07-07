#include<iostream>
using namespace std; 

void TheSlothThatCodes()
{
    int len;
    string num;
    cin >> len >> num;
    int first = 0, second = len - 1;
    
    while (first < second)
    {
        if (num[first] == '1' && num[second] == '0')
        {
            first++;
            second--;
            continue;
        }

        if (num[first]  == '0' && num[second] == '1')
        {
            first++;
            second--;
            continue;
        }

        break;
    }

    cout <<second - first + 1 << endl;
    

}

int main()
{
    int c;cin >> c;
    while (c--)
    {
        TheSlothThatCodes();
    }
    
     return 0;
}