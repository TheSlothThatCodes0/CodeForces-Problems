#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> lengths(n);
        for (int i = 0; i < n; ++i) {
            cin >> lengths[i];
        }

        sort(lengths.begin(), lengths.end());

        long long count = 0;

        for (int i = n - 1; i >= 2; --i) {
            int left = 0;
            int right = i - 1;

            while (left < right) {
                if (lengths[left] + lengths[right] > lengths[i]) {
                    count += (right - left);
                    right--;
                } else {
                    left++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
