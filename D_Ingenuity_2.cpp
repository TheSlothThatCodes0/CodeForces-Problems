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

    bool r_moved = false, h_moved = false;
    int h_x = 0, h_y = 0, r_x = 0, r_y = 0;

    string ans = "";

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'N' || s[i] == 'S')
        {

            if (!h_moved || !r_moved)
            {
                if (!h_moved && r_moved && (r_y > h_y) && s[i] == 'S')
                {
                    r_y--;
                    ans += "R";
                    r_moved = true;
                    continue;
                }

                if (!h_moved && r_moved && (r_y < h_y) && s[i] == 'N')
                {
                    r_y++;
                    ans += "R";
                    r_moved = true;
                    continue;
                }

                if (!r_moved && h_moved && (r_y < h_y) && s[i] == 'S')
                {
                    h_y--;
                    ans += "H";
                    h_moved = true;
                    continue;
                }

                if (!r_moved && h_moved && (r_y > h_y) && s[i] == 'N')
                {
                    h_y++;
                    ans += "H";
                    h_moved = true;
                    continue;
                }

                if (!h_moved && r_moved)
                {
                    if (s[i] == 'S')
                    {
                        h_y--;
                        ans += "H";
                        h_moved = true;
                        continue;
                    }

                    else
                    {
                        h_y++;
                        ans += "H";
                        h_moved = true;
                        continue;
                    }
                }

                if (h_moved && !r_moved)
                {
                    if (s[i] == 'S')
                    {
                        r_y--;
                        ans += "R";
                        r_moved = true;
                        continue;
                    }

                    else
                    {
                        r_y++;
                        ans += "R";
                        r_moved = true;
                        continue;
                    }
                }

                if (!h_moved && !r_moved)
                {
                    if (s[i] == 'S')
                    {
                        h_y--;
                        ans += "H";
                        h_moved = true;
                        continue;
                    }

                    else
                    {
                        h_y++;
                        ans += "H";
                        h_moved = true;
                        continue;
                    }
                }
            }

            else
            {
                if (h_y > r_y)
                {
                    if (s[i] == 'S')
                    {
                        h_y--;
                        ans += "H";
                        h_moved = true;
                        continue;
                    }

                    else
                    {
                        r_y++;
                        ans += "R";
                        r_moved = true;
                        continue;
                    }
                }

                else
                {
                    if (s[i] == 'S')
                    {
                        r_y--;
                        ans += "R";
                        r_moved = true;
                        continue;
                    }

                    else
                    {
                        h_y++;
                        ans += "H";
                        h_moved = true;
                        continue;
                    }
                }
            }
        }

        // for east and west

        else
        {
            if (!h_moved || !r_moved)
            {
                if (!h_moved && r_moved && (r_x > h_x) && s[i] == 'W')
                {
                    r_x--;
                    ans += "R";
                    r_moved = true;
                    continue;
                }

                if (!h_moved && r_moved && (r_x < h_x) && s[i] == 'E')
                {
                    r_x++;
                    ans += "R";
                    r_moved = true;
                    continue;
                }

                if (!r_moved && h_moved && (r_x < h_x) && s[i] == 'W')
                {
                    h_x--;
                    ans += "H";
                    h_moved = true;
                    continue;
                }

                if (!r_moved && h_moved && (r_x > h_x) && s[i] == 'E')
                {
                    h_x++;
                    ans += "H";
                    h_moved = true;
                    continue;
                }

                if (!h_moved && r_moved)
                {
                    if (s[i] == 'W')
                    {
                        h_x--;
                        ans += "H";
                        h_moved = true;
                        continue;
                    }

                    else
                    {
                        h_x++;
                        ans += "H";
                        h_moved = true;
                        continue;
                    }
                }

                if (h_moved && !r_moved)
                {
                    if (s[i] == 'W')
                    {
                        r_x--;
                        ans += "R";
                        r_moved = true;
                        continue;
                    }

                    else
                    {
                        r_x++;
                        ans += "R";
                        r_moved = true;
                        continue;
                    }
                }

                if (!h_moved && !r_moved)
                {
                    if (s[i] == 'W')
                    {
                        h_x--;
                        ans += "H";
                        h_moved = true;
                        continue;
                    }

                    else
                    {
                        h_x++;
                        ans += "H";
                        h_moved = true;
                        continue;
                    }
                }
            }

            else
            {
                if (h_x > r_x)
                {
                    if (s[i] == 'W')
                    {
                        h_x--;
                        ans += "H";
                        h_moved = true;
                        continue;
                    }

                    else
                    {
                        r_x++;
                        ans += "R";
                        r_moved = true;
                        continue;
                    }
                }

                else
                {
                    if (s[i] == 'W')
                    {
                        r_x--;
                        ans += "R";
                        r_moved = true;
                        continue;
                    }

                    else
                    {
                        h_x++;
                        ans += "H";
                        h_moved = true;
                        continue;
                    }
                }
            }
        }
    }

    if (h_x != r_x || h_y != r_y || !h_moved || !r_moved)
    {
        cout << "NO" << endl;
        return;
    }

    cout << ans << endl;
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