#include <iostream>
#include <vector>
#include <array>
#include <random>
using namespace std;


void counting_sort(vector<int> &v) {
  array<int, 20001> count;
  int k;

  for (int &e: count)
    e = 0;

  for (int e: v)
    count[e + 10000]++;

  k = 0;
  for (int i = 0; i < count.size(); i++)
    for (int j = 0; j < count[i]; j++) {
      v[k++] = i - 10000;
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
  for (auto e: v)
    cout << e << " ";
  cout << endl;
}


int main() {
  vector<int> v;

  v = read_array();
  counting_sort(v);
  print_array(v);

  return 0;
}
