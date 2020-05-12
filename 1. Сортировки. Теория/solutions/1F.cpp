#include <iostream>
#include <string>
#include <array>
using namespace std;


void counting_sort(string &s) {
  array<int, 36> count;
  int k;

  for (int &e: count)
    e = 0;

  for (int e: s)
    if (int(e) > 47 && int(e) < 58)
      count[int(e) - 48]++;
    else if (int(e) > 96 && int(e) < 123)
      count[int(e) - 87]++;

  k = 0;
  for (int i = 0; i < count.size(); i++)
    for (int j = 0; j < count[i]; j++) {
      s[k++] = char(i + 48);
    }
}


int main() {
  string s1, s2;

  cin >> s1;
  cin >> s2;
  counting_sort(s1);
  counting_sort(s2);

  if (s1 == s2)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
