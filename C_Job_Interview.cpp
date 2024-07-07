#include<iostream>
#include<bits/stdc++.h>
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
    int t, p; cin >> p >> t;
    vll p_skills(t+p+1), t_skills(t+p+1);

    for (int i = 0; i < t+p+1; i++)
    {
        cin >> p_skills[i];
    }

    for(int i = 0; i < t+p+1; i++)
    {
        cin >> t_skills[i];
    }

    int temp_t = 0, temp_p = 0;
    vector<pair<char, char>> jobs;

    int team = 0; 
    for (int i = 0; i < t+p; i++)
    {
        char skilled_at, job_doing;
        if (p_skills[i] > t_skills[i])
        {
            skilled_at = 'p';
        }
        else
        {
            skilled_at = 't';
        }

        if (temp_t < t && skilled_at == 't')
        {
            job_doing = 't';
            team += t_skills[i];
            temp_t++;
        }
        else if (temp_p <p && skilled_at == 'p')
        {
            job_doing = 'p';
            team += p_skills[i];
            temp_p++;
        }
        else if(temp_t == t)
        {
            job_doing = 'p';
            team += p_skills[i];
            temp_p++;
        }
        else if(temp_p == p)
        {
            job_doing = 't';
            team += t_skills[i];
            temp_t++;
        }

        jobs.pb({skilled_at, job_doing});
    }

    cout << "team: " << team << endl;

    int tester_value = -1, programmer_value = -1;
    int counter = 0;
    for(auto i : jobs)
    {
        if (i.first != i.second)
        {
            if (i.second == 'p')
            {
                tester_value = t_skills[counter];
                programmer_value = p_skills[t+p];
            }
            else
            {
                programmer_value = p_skills[counter];
                tester_value = t_skills[t+p];
            }

            break;
        }

        counter++;
    }

    if (tester_value == -1 && programmer_value == -1)
    {
        tester_value = t_skills[t+p];
        programmer_value = p_skills[t+p];
    }

    cout << "tester_value: " << tester_value << " programmer_value: " << programmer_value << endl;
    
    vll ans(t+p+1, team);
    for (int i = 0; i < t+p; i++)
    {
        if(jobs[i].second == 't')
        {
            ans[i] += tester_value;
            ans[i] -= t_skills[i];
        }
        else
        {
            ans[i] += programmer_value;
            ans[i] -= p_skills[i];
        }
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
    
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int c; cin >> c;
    while (c--)
    {
        TheSlothThatCodes();
    }
    
    return 0;
}