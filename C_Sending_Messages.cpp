#include<iostream>
using namespace std; 

void TheSlothThatCodes()
{
    long long int no_messages, charge, send_charge, off_charge;

    cin >> no_messages >> charge >> send_charge >> off_charge;

    long long int output = 0, last_moment = 0, this_moment = 0;

    for (int i = 0; i < no_messages; i++)
    {
        cin >> this_moment;
        if (((this_moment - last_moment) * send_charge) == off_charge)
        {
            output+= off_charge;
        }
        
        else
        {
            output += min((this_moment - last_moment) * send_charge, off_charge);
        }
        
        last_moment = this_moment;
    }

    // cout << output << endl;

    if (output >= charge)
    {
        cout << "NO" << endl;
        return;
    }

    else
    {
        cout << "YES" << endl;
        return;
    }
    
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