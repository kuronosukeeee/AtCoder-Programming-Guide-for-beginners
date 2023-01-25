#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> score(N);
  int sum = 0;

  for (int i = 0; i < N; i++) {
    cin >> score.at(i);

    sum += score.at(i);
  }

  int ave = sum / N;

  for (int i = 0; i < score.size(); i++) {
    int diff = ave - score.at(i);

    if (diff <= 0) {
      cout << -(diff) << endl;
    }
    else {
      cout << diff << endl;
    }

  }

}
