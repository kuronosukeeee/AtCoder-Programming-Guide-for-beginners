#include <bits/stdc++.h>
using namespace std;

int main() {
  
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        cout << "i:" << i << ", j:" << j << ", k:" << k << endl;
      }
    }
  }

  vector<int> A(3);

  for (int i = 0; i < A.size(); i++) {
    cin >> A.at(i);
  }

  vector<int> B(3);
  
  for (int i = 0; i < B.size(); i++) {
    cin >> B.at(i);
  }

  bool flg;

  for (int i = 0; i < A.size(); i++) {
    for (int j = 0; j < B.size(); j++) {
      if (A.at(i) == B.at(j)) {
        flg = true;
      }
    }
  }

  if (flg) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }

  int sum = 0;
  bool finished = false;

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
    
      sum += i * j;

      if (sum > 1000) {
        cout << i << ", " << j << endl;
        finished = true;
        break;
      }
    }
    
    if (finished) {
      break;
    }
  }

  cout << sum << endl;
}