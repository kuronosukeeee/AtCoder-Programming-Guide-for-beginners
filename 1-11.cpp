#include <bits/stdc++.h>
using namespace std;

int main() {

  int j = 0;
  
  while (j < 3) {
    cout << "Hello while:" << j << endl;
    j++;
  }

  for (int i = 0; i < 3; i++) {
    cout << "Hello for:" << i << endl;
  }

  for (int i = 0; i < 5; i++) {

    if (i == 3) {
      cout << "抜ける" << endl;
      break;
    }

    cout << i << endl;
  }

  for (int i = 0; i < 5; i++) {

    if (i == 3) {
      cout << "飛ばす" << endl;
      continue;
    }

    cout << i << endl;
  }

      cout << "終了" << endl;

}