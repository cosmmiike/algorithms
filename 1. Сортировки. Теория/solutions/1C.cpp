#include <iostream>
#include <vector>
#include <random>
using namespace std;


void insertion_sort(vector<int> &v) {
  for (int i = 1; i < v.size(); i++)
    for (int j = i; j > 0; j--)
      if (v[j] < v[j-1])
        swap(v[j], v[j-1]);
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
  insertion_sort(v);
  print_array(v);

  return 0;
}
