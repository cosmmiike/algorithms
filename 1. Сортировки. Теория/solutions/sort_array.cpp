#include <iostream>
#include <vector>
#include <random>
using namespace std;


void sort_array(vector<int> &v) {
  int i, j, temp;

  for (i = 0; i < v.size() - 1; i++)
    for (j = i + 1; j < v.size(); j++)
      if (v[i] > v[j])
        swap(v[i], v[j]);
}


vector<int> generate_array(int size) {
  vector<int> v;
  int i, r;
  srand(unsigned(time(0)));

  for (i = 0; i < size; i++)
    v.push_back(rand() % 101 - 50);

  return v;
}


vector<int> read_array(int size) {
  vector<int> v;
  int i, e;

  for (i = 0; i < size; i++) {
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
  int i, n;
  cin >> n;
  vector<int> v = read_array(n);

  print_array(v);
  sort_array(v);
  print_array(v);

  return 0;
}
