#include <iostream>
#include <vector>
using namespace std;


int find_min(vector<int> &v);
int find_max(vector<int> &v);


void counting_sort(vector<int> &v) {
  vector<int> count;
  int k;

  int min = find_min(v);
  int max = find_max(v);

  for (int i = 0; i < max - min + 1; i++) {
    count.push_back(0);
  }

  for (int e: v) {
    count[e - min]++;
  }

  k = 0;
  for (int i = 0; i < count.size(); i++) {
    for (int j = 0; j < count[i]; j++) {
      v[k++] = i + min;
    }
  }
}


int find_min(vector<int> &v) {
  int min = 2000000001;

  for (int e: v) {
    if (e < min) {
      min = e;
    }
  }

  return min;
}


int find_max(vector<int> &v) {
  int max = -2000000001;

  for (int e: v) {
    if (e > max) {
      max = e;
    }
  }

  return max;
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
  counting_sort(v);
  print_array(v);

  return 0;
}
