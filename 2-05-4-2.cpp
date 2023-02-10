#include <bits/stdc++.h>
using namespace std;

int ReceiveTime(vector<vector<int>> &, int);

int main() {
  int n;
  cin >> n;

  vector<int> parent(n);

  parent.at(0) = -1;

  for (int i = 1; i < n; i++) {
    cin >> parent.at(i);
  }

  vector<vector<int>> children(n);

  for (int i = 1; i < n; i++) {
    int p;
    p = parent.at(i);

    children.at(p).push_back(i);
  }

  cout << ReceiveTime(children, 0) << endl;
}

int ReceiveTime(vector<vector<int>> &children, int x) {
  if (children.at(x).size() == 0) {
    return 0;
  }

  int maxReceiveTime = 0;

  for (int c : children.at(x)) {
    int receiveTime = ReceiveTime(children, c) + 1;
    maxReceiveTime = max(receiveTime, maxReceiveTime);
  }
  return maxReceiveTime;
}