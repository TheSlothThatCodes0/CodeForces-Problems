    #include<iostream>
    #include<vector>
    #include<algorithm>
    #include<map>
    using namespace std; 

    void TheSlothThatCodes()
    {
        int len;
        cin >> len;
        map<int , int> mp;
        for (int i = 0; i < len; i++)
        {
            int x =0;
            cin >> x;
            mp[x]++;
        }

        if (mp.size() >= 3)
        {
            cout << "No" << endl;
            return;
        }
        
        if (abs(mp.begin()->second - mp.rbegin()->second ) <= 1)
        {
            cout << "Yes" << endl;
            return;
        }

        cout << "No" << endl;
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