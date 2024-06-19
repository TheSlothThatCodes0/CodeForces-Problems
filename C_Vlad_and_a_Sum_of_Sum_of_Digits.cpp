#include <iostream>
using namespace std;

// Function to calculate the sum of digits for numbers from 1 to n
long long sumOfDigits1toN(int n) {
    // Calculate the number of complete cycles and the remaining numbers
    int completeCycles = n / 9;
    int remainingNumbers = n % 9;

    // Calculate the sum for complete cycles
    long long totalSum = 0;
    totalSum += 45LL * completeCycles; // 45 is the sum of digits from 1 to 9, use long long for larger numbers

    // Calculate the sum for remaining numbers
    for (int i = 1; i <= remainingNumbers; ++i) {
        totalSum += i;
    }

    return totalSum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long result = sumOfDigits1toN(n);
        cout << result << endl;
    }

    return 0;
}
