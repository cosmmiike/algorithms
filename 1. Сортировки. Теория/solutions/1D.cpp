#include <iostream>
#include <vector>
#include <random>
using namespace std;


struct participant {
  int id;
  int result;
};


void participant_sort(vector<participant> &p) {
  for (int i = 0; i < p.size() - 1; i++)
    for (int j = 1; j < p.size() - i; j++)
      if (p[j - 1].result < p[j].result)
        swap(p[j - 1], p[j]);
      else if (p[j - 1].result == p[j].result && p[j - 1].id > p[j].id) {
        swap(p[j - 1], p[j]);
      }
}


vector<participant> read_data() {
  vector<participant> participants;
  participant p;
  int n;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> p.id >> p.result;
    participants.push_back(p);
  }

  return participants;
}


void print_data(vector<participant> &v) {
  for (auto e: v)
    cout << e.id << " " << e.result << endl;
}


int main() {
  vector<participant> v;

  v = read_data();
  participant_sort(v);
  print_data(v);

  return 0;
}
