#include <iostream>
#include <vector>
using namespace std;

void TheSlothThatCodes()
{

    int n;
    cin >> n;
    vector<int> nums(n);
    int diff = 1e9;
    bool sorted = true;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        if (i > 0)
        {
            diff = min(nums[i] - nums[i - 1], diff);
            sorted &= nums[i] >= nums[i - 1];
        }
    }

    if (!sorted)
    {
        cout << 0 << endl;
        return;
    }

    cout << diff / 2 + 1 << endl;
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