#include <bits/stdc++.h>
using namespace std;

int my_min(int x, int y) {

  if (x < y) {
    return x;
  }
  else {
    return y;
  }

}

int my_min(int x, int y, int z) {

  if (x < y && x < z) {
    return x;
  }
  else if (y < x && y < z) {
    return y;
  }
  else {
    return z;
  }

}

void hello(string text) {
  cout << "Hello," << text << endl;
  return;
  }

int input() {
  int x;
  cin >> x;
  return x;
}

void add5(int x) {
  x += 5;
  cout << x << endl;
  return;
}

int main() {
  int answer = my_min(10, 5);
  cout << answer << endl;

  hello("Tom");
  hello("C++");

  int num = input();
  cout << num + 5 << endl;

  int n = 10;
  add5(n);
  cout << n << endl;

  int answer2;
  cout << answer2 << endl;
}
