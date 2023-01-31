#include <bits/stdc++.h>
using namespace std;

int main() {

  // vector<vector<int>> data = {
  //     {7, 4, 0, 8},
  //     {2, 0, 3, 5},
  //     {6, 1, 7, 0}
  // };

  // vector<vector<int>> data2 (3, vector<int>(4));

  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 4; j++) {
  //     cin >> data2.at(i).at(j);
  //   }
  // }

  // int cnt = 0;

  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 4; j++) {
  
  //     if (data2.at(i).at(j) == 0) {
  //       cnt++;
  //     }
  
  //   }
  // }

  // cout << cnt << endl;

  // vector<vector<int>> data(3);

  // data.at(0).push_back(1);
  // data.at(0).push_back(2);
  // data.at(0).push_back(3);
 
  // data.at(1).push_back(1);
  // data.at(1).push_back(2);
  // data.at(1).push_back(3);
  // data.at(1).push_back(4);

  // data.at(2).push_back(1);
  // data.at(2).push_back(2);

  int N;
  cin >> N;

  vector<vector<vector<char>>> chart(N, vector<vector<char>>(3, vector<char>(3)));

  int cnt = 0;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        cin >> chart.at(i).at(j).at(k);
      }
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {

        if (chart.at(i).at(j).at(k) == 'o') {
          cnt++;
        }

      }
    }
  }

  cout << cnt << endl;
}