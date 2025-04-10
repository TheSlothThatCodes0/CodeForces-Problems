#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int solve_map_optimized(const vector<int>& map) {
    int n = map.size();
    vector<int> next_greater(n, n);
    stack<int> s;

    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && map[s.top()] < map[i]) {
            s.pop();
        }
        if (!s.empty()) {
            next_greater[i] = s.top();
        }
        s.push(i);
    }

    int rounds = 0;
    int pos = -1;

    for (int i = 0; i < n; i++) {
        if (i > pos) {
            rounds++;
            pos = i;
        }
        pos = next_greater[pos];
    }

    return rounds;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    vector<int> map(n);
    for (int i = 0; i < n; i++) {
        cin >> map[i];
    }
    
    int result = solve_map_optimized(map);
    cout << result << endl;
    
    return 0;
}