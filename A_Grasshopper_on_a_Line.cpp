#include<iostream>
#include<vector>
using namespace std; 

void solve()
{
    int a, b; cin >> a >> b;
    int sum = 0, target = a;

    vector<int> lst;
    while ((sum != a))
    {
        for (int i = target; i > 0; i--)
        {
            // cout << i << " ()";
            if (i % b != 0)
            {
                lst.push_back(i);
                sum += i;
                target -= i;
                // cout << target << " | ";
                break;
            }  
        }
    }

    cout << lst.size() << endl;
    for (int i : lst )
    {
        cout << i << " ";
    }
    
    cout << endl;
    

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