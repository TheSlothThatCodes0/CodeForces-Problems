#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void TheSlothThatCodes()
{
    string w, t; cin >> w >> t;

    if (w == t)
    {
        cout << "YES" << endl;
    return;
    }

    reverse(w.begin(),w.end());
    reverse(t.begin(),t.end());
    int index = INT_MAX;
    bool found = false;

    for (int i = 0; i < t.size()-1; i++)
    {
        found = false;
        for (int j = 0; j < w.size(); j++)
        {

            if (w[j] == t[i] && j > index)
            {
                index = j;
                found = true;
                break;
            }

        }

        if (found != true)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;

}

void solve_()
{
    string s, t; cin >> s >> t;

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    for (int i = 0; i < t.size()-1; i++)
    {
        if (s.find(t[i]) > s.find(t[i+1])  || s.find(t[i]) == string::npos || s.find(t[i+1]) == string::npos)
        {
            cout << "NO" << endl;
            return;
        }

    }

    cout << "YES" << endl;

}

void solve_3()
{
    string s,t; cin >> s >> t;

    map<ll, ll> mp_s, mp_t;

    for (int i = 0; i < s.size(); i++)
    {
        mp_s[s[i]] = 0;
    }

    for (int i = 0; i < t.size(); i++)
    {
        mp_t[t[i]] = 0;
    }
    
    ll t_size = t.size()-1, s_size = s.size()-1;
    bool trigger = false;

    while (t_size >= 0 && s_size >= 0)
    {
        if (s[s_size] != t[t_size])
        {
            mp_s[s[s_size]]++;
            s_size--;
        }

        else
        {
            if (mp_s[s[s_size]] != mp_t[t[t_size]])
            {
                trigger = true;
                break;
            }

            mp_s[s[s_size]]++;
            mp_t[t[t_size]]++;

            s_size--;
            t_size--; 
            
        }
        
    }

    if (trigger)
    {
        cout << "NO" << endl;
        return;
    }

    if (t_size >= 0)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c; cin >> c;
    while (c--)
    {
        solve_3();
    }

    return 0;
}





// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// int32_t main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         string s, target;
//         cin >> s >> target;
//         map<ll, ll> mp1;
//         for (ll i = 0; i < s.size(); i++)
//         {
//             mp1[s[i]] = 0;
//         };
//         map<ll, ll> mp2;
//         for (ll i = 0; i < target.size(); i++)
//         {
//             mp2[target[i]] = 0;
//         };
//         ll i = s.size() - 1;
//         ll j = target.size() - 1;
//         ll checker = 0;
//         while (i >= 0 && j >= 0)
//         {
//             if (s[i] == target[j])
//             {
//                 if (mp1[s[i]] != mp2[target[j]])
//                 {
//                     checker = 1;
//                 }
//                 if (checker == 1)
//                 {
//                     break;
//                 }
//                 mp2[target[j]] += 1;
//                 mp1[s[i]] += 1;
//                 i -= 1;
//                 j -= 1;
//             }
//             else
//             {
//                 mp1[s[i]] += 1;
//                 i -= 1;
//             }
//         }
//         if (j >= 0)
//         {
//             cout << "NO\n";
//         }
//         else if (checker == 1)
//         {
//             cout << "NO\n";
//         }
//         else
//         {
//             cout << "YES\n";
//         }
//     }
//     return 0;
// }