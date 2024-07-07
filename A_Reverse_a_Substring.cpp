#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define vll vector<long long>
#define endl "\n"
#define int ll
#define pb push_back

void TheSlothThatCodes()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (is_sorted(s.begin(), s.end()))
    {
        cout << "NO" << endl;
        return;
    }

    int stop = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] > s[i + 1])
        {
            stop = i+1;
            break;
        }
    }

    int start = stop-1;

    YES;
    cout << start + 1 << " " << stop + 1 << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    TheSlothThatCodes();

    return 0;
}