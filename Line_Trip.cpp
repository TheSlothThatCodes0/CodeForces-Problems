#include<iostream>
using namespace std; 

int main()
{
    int cycles;
    cin >> cycles;

    while (cycles--)
    {
        int gasStations, distance_travelled, max_distance = 0, first, second = 0;
        cin >> gasStations >> distance_travelled;

        for (int i = 0; i < gasStations; i++)
        {
            cin >> first;
            int distance = first - second;
            second = first;

            if ((i != gasStations-1) && (distance > max_distance))
            {
                max_distance = distance;
            }

            else if ((i == gasStations-1) && ((distance_travelled - first)*2 > max_distance))
            {
                max_distance = (distance_travelled - first)*2;
            }    
        }

        cout << max_distance << "\n";

    }
    return 0;
}