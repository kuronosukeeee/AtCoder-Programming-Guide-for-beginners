#include <bits/stdc++.h>
using namespace std;

int sum_range(int i, int j);

int main() {
  int i, j;
  cin >> i >> j;

  cout << sum_range(i, j) << endl;
}

int sum_range(int i, int j) {
  if (i == j) {
    return j;
  }

  int sum = sum_range(i, j - 1);
  return sum + j;
}