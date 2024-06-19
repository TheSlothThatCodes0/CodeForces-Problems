#include<iostream>
using namespace std; 

int main()
{
    
    long long len, min_distance = INT32_MAX;
    cin >> len;
    
    for (int i = 0; i < len; i++)
    {
        long long x;
        cin >> x;
        min_distance = min(min_distance, abs(x));
    }

    cout << min_distance;
    return 0;
}