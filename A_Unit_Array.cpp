#include<iostream>
using namespace std; 

void solve()
{
    int len, count_m1 = 0, count_1 = 0;
    cin >> len;

    for (int i = 0; i < len; i++)
    {
        int x;
        cin >> x;

        if (x == -1)
        {
            count_m1++;
        }

        else
        {
            count_1++;
        }
    }

    int count = 0;
    
    while ((count_m1 % 2 != 0) || (count_m1 > count_1))
    {
        count_m1--;
        count_1++;
        count++;
    }
    
    cout << count << endl;
    
}


int main()
{
    int c; cin >> c;
    while (c--)
    {
        solve();
    }
    
     return 0;
}