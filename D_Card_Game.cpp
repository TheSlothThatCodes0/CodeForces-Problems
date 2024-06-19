#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool is_trump(char card, char trump_suit) {
  return card == trump_suit;
}

bool beats(char card1, char card2, char trump_suit) {
  if (card1 == card2) {
    return false;
  } else if (is_trump(card1, trump_suit)) {
    return true;
  } else if (is_trump(card2, trump_suit)) {
    return false;
  } else {
    return card1 > card2;
  }
}

vector<pair<char, char>> reconstruct_game(const vector<char>& cards, char trump_suit) {
  int n = cards.size() / 2;
  unordered_map<char, int> freq;
  for (char card : cards) {
    freq[card]++;
  }

  vector<pair<char, char>> result;
  for (int i = 0; i < n; ++i) {
    // Check all cards against each other, not just once per card
    for (char card1 : freq.keys()) {
      if (freq[card1] > 0) {
        for (char card2 : freq.keys()) {
          if (freq[card2] > 0 && beats(card1, card2, trump_suit)) {
            freq[card1]--;
            freq[card2]--;
            result.push_back({card1, card2});
            break; // Move on to the next round after finding a valid pair
          }
        }
        break; // Move on to the next possible first card if no pair found
      }
    }
  }

  if (result.size() != n) {
    return {};
  }
  return result;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    char trump_suit;
    cin >> n >> trump_suit;

    vector<char> cards(n * 2);
    for (int i = 0; i < n * 2; ++i) {
      cin >> cards[i];
    }

    vector<pair<char, char>> result = reconstruct_game(cards, trump_suit);
    if (result.empty()) {
      cout << "IMPOSSIBLE" << endl;
    } else {
      for (const auto& p : result) {
        cout << p.first << " " << p.second << endl;
      }
    }
  }
  return 0;
}
