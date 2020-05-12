#include <iostream>
#include <vector>
using namespace std;


void selection_sort(vector<int> &v) {
  int *m;

  for (int i = 0; i < v.size() - 1; i++) {
    m = &v.at(i);
    for (int j = i + 1; j < v.size(); j++) {
      if (v[j] < *m) {
        m = &v.at(j);
      }
    }
    swap(v.at(i), *m);
  }
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


void print_array(vector<int> &v) {
  for (auto e: v) {
    cout << e << " ";
  }
  cout << endl;
}


int main() {
  vector<int> v;

  v = read_array();
  selection_sort(v);
  print_array(v);

  return 0;
}
