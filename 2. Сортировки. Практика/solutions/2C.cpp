#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int get_levels_num(vector<int> levels, int min) {
  int count = 0, prev = -2;

  sort(levels.begin(), levels.end());
  for (int e: levels) {
    if (e >= min && e > prev + 2) {
      prev = e;
      count++;
    }
  }

  return count;
}


vector<int> read_array() {
  vector<int> v;
  int n, e;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> e;
    v.push_back(e);
  }

  return v;
}


int main() {
  vector<int> levels;
  int min, n;

  cin >> min;
  levels = read_array();
  n = get_levels_num(levels, min);

  cout << n << endl;

  return 0;
}
