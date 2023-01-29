#include <bits/stdc++.h>
using namespace std;

int main() {

  int keyValue;
  cin >> keyValue;

  vector<int> vec(5);

  for (int i = 0; i < vec.size(); i++) {
    cin >> vec.at(i);
  }

  int cnt = 0;

  for (int i = 0; i < vec.size(); i++) {
    if (vec.at(i) == keyValue) {
      cnt++;
    }
  }

  cout << cnt << endl;

  for (int x : vec) {
    cout << x << endl;
  }

  string str = "hello";

  for (char c : str) {
    if (c == 'l') {
      c = 'L';
    }
    cout << c;
  }

  cout << endl;

  int N;
  cin >> N;

  int cnt2 = 0;

  while (N % 2 == 0 && N > 0) {
    N = N / 2;
    cnt2++;
  }

  cout << cnt2 << endl;
  
}