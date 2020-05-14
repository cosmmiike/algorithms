#include <iostream>
#include <array>
#include <string>
using namespace std;


string make_palindrome(string s) {
  array<int, 26> count;
  string res, single;
  int k;

  res = "";
  single = "";

  for (int &e: count) {
    e = 0;
  }

  for (int e: s) {
    if (int(e) > 64 && int(e) < 91) {
      count[int(e) - 65]++;
    }
  }

  for (int i = 0; i < count.size(); i++) {
    while (count[i] > 1) {
      res += char(i + 65);
      count[i] -= 2;
    }
    if (count[i] == 1 && single == "") {
      single = char(i + 65);
    }
  }

  if (single == "") {
    for (int i = res.size() - 1; i > -1; i--) {
      res += res[i];
    }
  } else {
    res += single;
    for (int i = res.size() - 2; i > -1; i--) {
      res += res[i];
    }
  }

  return res;
}


string read_line(int n) {
  string line;
  char letter;

  for(int i = 0; i < n; i++) {
    cin >> letter;
    line += letter;
  }

  return line;
}


int main() {
  int n;
  string s, res;

  cin >> n;
  s = read_line(n);
  res = make_palindrome(s);

  cout << res << endl;

  return 0;
}
