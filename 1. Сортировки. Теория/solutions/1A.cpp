#include <iostream>
#include <vector>
using namespace std;


void bubble_sort(vector<int> &v) {
  for (int i = 0; i < v.size() - 1; i++)
    for (int j = 1; j < v.size() - i; j++)
      if (v[j - 1] > v[j])
        swap(v[j - 1], v[j]);
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
  for (auto e: v)
    cout << e << " ";
  cout << endl;
}


int main() {
  vector<int> v;

  v = read_array();
  bubble_sort(v);
  print_array(v);

  return 0;
}
