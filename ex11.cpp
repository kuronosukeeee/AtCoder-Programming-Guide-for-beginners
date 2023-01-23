#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  // ここにプログラムを追記


  int sum = A;

  for (int i = 0; i < N; i++) {
    string op;
    cin >> op;

    int B;
    cin >> B;

    if (op == "+") {
      sum += B;
    }
    else if (op == "-") {
      sum -= B;
    }
    else if (op == "*") {
      sum *= B;
    }
    else if (op == "/" && B != 0) {
      sum /= B;
    }
    else {
      cout << "error" << endl;
      break;
    }

    cout << i + 1 << ":" << sum << endl;
  }

}
