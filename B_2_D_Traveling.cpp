#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define vll vector<long long>
#define endl "\n"
#define int ll
#define pb push_back

void TheSlothThatCodes() {
    int n, k, a, b;
    cin >> n >> k >> a >> b;

    vector<pair<int, int>> cords(n);

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        cords[i] = make_pair(x, y);
    }

    vll distanceFromStart, distanceFromEnd;

    for (int i = 0; i < k; i++) {
        int distance = abs(cords[a - 1].first - cords[i].first) + abs(cords[a - 1].second - cords[i].second);
        distanceFromStart.pb(distance);
    }

    for (int i = 0; i < k; i++) {
        int distance = abs(cords[b - 1].first - cords[i].first) + abs(cords[b - 1].second - cords[i].second);
        distanceFromEnd.pb(distance);
    }

    int distanceBetween = abs(cords[a - 1].first - cords[b - 1].first) + abs(cords[a - 1].second - cords[b - 1].second);

    if (!distanceFromEnd.empty() && !distanceFromStart.empty()) {
        sort(distanceFromEnd.begin(), distanceFromEnd.end());
        sort(distanceFromStart.begin(), distanceFromStart.end());

        int distanceFromCities = distanceFromStart[0] + distanceFromEnd[0];
        distanceFromCities = min(distanceFromCities, distanceBetween);

        cout << distanceFromCities << endl;
    } else {
        cout << distanceBetween << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    cin >> c;
    while (c--) {
        TheSlothThatCodes();
    }

    return 0;
}
