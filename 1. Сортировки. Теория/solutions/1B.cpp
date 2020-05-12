#include <iostream>
#include <vector>
#include <random>
using namespace std;


void insertion_sort(vector<int> &v) {
  int *m;

  for (int i = 0; i < v.size() - 1; i++) {
    m = &v.at(i);
<<<<<<< HEAD
    for (int j = i + 1; j < v.size(); j++)
      if (v[j] < *m)
        m = &v.at(j);
    swap(v.at(i), *m);
=======
    for (int j = i + 1; j < v.size(); j++) {
      if (v[j] < *m)
        m = &v.at(j);
      swap(v[i], *m);
    }
>>>>>>> 1064a712393fbf8b672be951c9a3238b28616bb9
  }
}


vector<int> generate_array(int size) {
  vector<int> v;

  srand(unsigned(time(0)));
  for (int i = 0; i < size; i++)
    v.push_back(rand() % 101 - 50);

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
