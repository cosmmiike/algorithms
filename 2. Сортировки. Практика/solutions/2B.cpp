#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int get_delivery_num(vector<int> matrix, vector<int> greed) {
  int count = 0;

  sort(greed.begin(), greed.end());
  sort(matrix.begin(), matrix.end());

  for (int car: greed) {
    for (int &cost: matrix) {
      if (cost >= car) {
        cost = 0;
        count += 1;
        break;
      }
    }
  }

  return count;
}


vector<int> read_matrix() {
  vector<int> v;
  int n, m, e;

  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> e;
      v.push_back(e);
    }
  }

  return v;
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
  vector<int> matrix, greed;
  int n;

  matrix = read_matrix();
  greed = read_array();
  n = get_delivery_num(matrix, greed);
  cout << n << endl;

  return 0;
}
