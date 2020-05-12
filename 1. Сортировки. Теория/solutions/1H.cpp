#include <iostream>
#include <vector>
using namespace std;


void merge(vector<int> &v, int a, int b, int c);
void merge_sort_recursive(vector<int> &v, int a, int c);


void merge_sort(vector<int> &v) {
  merge_sort_recursive(v, 0, v.size() - 1);
}


void merge_sort_recursive(vector<int> &v, int a, int c) {
  if (a < c) {
    int b = a + (c - a) / 2;
    merge_sort_recursive(v, a, b);
    merge_sort_recursive(v, b + 1, c);
    merge(v, a, b, c);
  }
}


void merge(vector<int> &v, int a, int b, int c) {
  int size_l, size_r;
  int count_l, count_r, index;
  vector<int> left, right;

  size_l = b - a + 1;
  size_r = c - b;

  for (int i = 0; i < size_l; i++)
    left.push_back(v[a + i]);

  for (int i = 0; i < size_r; i++)
    right.push_back(v[b + i + 1]);

  count_l = 0;
  count_r = 0;
  index = a;

  while (count_l < size_l && count_r < size_r) {
    if (left[count_l] < right[count_r]) {
      v[index] = left[count_l];
      count_l++;
    } else {
      v[index] = right[count_r];
      count_r++;
    }
    index++;
  }

  while (count_l < size_l) {
    v[index] = left[count_l];
    count_l++;
    index++;
  }

  while (count_r < size_r) {
    v[index] = right[count_r];
    count_r++;
    index++;
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
  merge_sort(v);
  print_array(v);

  return 0;
}
