#include<iostream>
#include<vector>
using namespace std;

void solve()
{
    int n, m, c1, c2;

    cin >> n;

    vector<int> city;
    vector<int> diff;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        city.push_back(temp);
    }

    for (int i = 0; i < n-1; i++)
    {
        int lol;
        lol = abs((city[i+1]-city[i]));
        diff.push_back(lol);
    }
    

    cin >> m;
    int output = 0;

    while (m--)
    {
        cin >> c1 >> c2;

        if (c1 < c2)
        {
            for (int i = c1; i < c2-1; i++)
            {
                if (i == 1)
                {
                    output++;
                }

                else if (i == n-1)
                {
                    output += diff[n-1];
                }

                else if (diff[i] < diff[i-1])
                {
                    output++;
                }

                else
                {
                    output += diff[i];
                }           
                
            }

            cout << output << endl;
            
            
        }

        else
        {
            for (int i = c2-1; i < c2-1; i--)
            {
                if (i == 1)
                {
                    output+= diff[0];
                }

                else if (i == n-1  )
                {
                    output += diff[n-1];
                }

                else if (diff[i] < diff[i-1])
                {
                    output++;
                }

                else
                {
                    output += diff[i];
                }           
                
            }

            cout << output << endl;
        }
        
        
    }
    
    
}

int main()
{
    int c;
    cin >> c;
    while (c--)
    {
        solve();
    }
    
     return 0;
}