#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define F first
#define S second

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> people(n);
    
    for(int i = 0; i < n; i++) {
        cin >> people[i].F >> people[i].S;
    }
    
    int greetings = 0;
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if((people[i].F < people[j].F && people[i].S > people[j].S) || 
               (people[i].F > people[j].F && people[i].S < people[j].S)) {
                greetings++;
            }
        }
    }
    
    cout << greetings << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}