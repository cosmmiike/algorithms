#include <iostream>
#include <vector>
#include <random>
using namespace std;


void sort_array(vector<int> &v) {
  for (int i = 0; i < v.size() - 1; i++) {
    for (int j = i + 1; j < v.size(); j++) {
      if (v[i] > v[j]) {
        swap(v[i], v[j]);
      }
    }
  }
}


vector<int> generate_array(int size) {
  vector<int> v;

  srand(unsigned(time(0)));
  for (int i = 0; i < size; i++) {
    v.push_back(rand() % 101 - 50);
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


void print_array(vector<int> &v) {
  for (auto e: v) {
    cout << e << " ";
  }

  cout << endl;
}


int main() {
  vector<int> v = read_array();

  sort_array(v);
  print_array(v);

  return 0;
}
