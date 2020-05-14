#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


string join_pieces(vector<string> pieces) {
  string res;

  for (int i = 0; i < pieces.size() - 1; i++) {
    for (int j = 1; j < pieces.size() - i; j++) {
      if (pieces[j] + pieces[j - 1] > pieces[j - 1] + pieces[j]) {
        swap(pieces[j - 1], pieces[j]);
      }
    }
  }

  for (string piece: pieces) {
    res += piece;
  }

  return res;
}


vector<string> read_pieces() {
  vector<string> v;
  string e;

  while (cin >> e) {
    v.push_back(e);
  }

  return v;
}


int main() {
  vector<string> pieces;
  string mark;

  pieces = read_pieces();
  mark = join_pieces(pieces);
  cout << mark << endl;

  return 0;
}
