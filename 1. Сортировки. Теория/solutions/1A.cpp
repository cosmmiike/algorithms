#include <iostream>
#include <vector>
#include <random>
using namespace std;


void bubble_sort(vector<int> &v) {
  int i, j, temp;

  for (i = 0; i < v.size() - 1; i++)
    for (j = 1; j < v.size() - i; j++)
      if (v[j - 1] > v[j])
        swap(v[j - 1], v[j]);
}


vector<int> generate_array(int size) {
  vector<int> v;
  int i, r;
  srand(unsigned(time(0)));

  for (i = 0; i < size; i++)
    v.push_back(rand() % 101 - 50);

  return v;
}


vector<int> read_array() {
  vector<int> v;
  int i, n, e;

  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> e;
    v.push_back(e);
  }

  return v;
}


void print_array(vector<int> &v) {
  int i;

  for (auto e: v)
    cout << e << " ";

  cout << endl;
}


int main() {
  vector<int> v;
  int i, n;

  v = read_array();
  bubble_sort(v);
  print_array(v);

  return 0;
}
