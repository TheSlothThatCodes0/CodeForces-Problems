#include <iostream>
#include <deque>
using namespace std;

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void solve() {
  unsigned ll n, m;
  cin >> n >> m;

  deque<unsigned ll> lst;
  unsigned ll product = 1;

  for (unsigned ll i = 0; i < n; i++) {
    unsigned ll x;
    cin >> x;
    lst.push_back(x);
    product = (product * x) % m;
  }

  string s;
  cin >> s;

  // Initial remainder calculation (avoids redundant multiplication in loop)
  unsigned ll remainder = product;

  for (unsigned ll i = 0; i < n; i++) {
    cout << remainder << " ";

    // Efficient removals using erase functions
    if (s[i] == 'R') {
      remainder = (remainder * m) % m;  // Reset reminder and add next element
      remainder = (remainder * lst.front()) % m;
      lst.erase(lst.begin());
    } else {
      remainder = (remainder * m) % m;  // Reset reminder and add next element
      remainder = (remainder * lst.back()) % m;
      lst.erase(lst.end() - 1);
    }
  }

  cout << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int c;
  cin >> c;
  while (c--) {
    solve();
  }

  return 0;
}
