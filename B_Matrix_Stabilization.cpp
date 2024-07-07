#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

#define int long long
#define pb push_back

void TheSlothThatCodes()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    vector<vector<int>> result = matrix;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            vector<int> neighbors;
            
            if (i > 0) neighbors.pb(matrix[i-1][j]);
            if (i < n-1) neighbors.pb(matrix[i+1][j]);
            if (j > 0) neighbors.pb(matrix[i][j-1]);
            if (j < m-1) neighbors.pb(matrix[i][j+1]);
            
            if (!neighbors.empty() && matrix[i][j] > *max_element(neighbors.begin(), neighbors.end()))
            {
                result[i][j] = *max_element(neighbors.begin(), neighbors.end());
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    cin >> c;
    while (c--)
    {
        TheSlothThatCodes();
    }

    return 0;
}