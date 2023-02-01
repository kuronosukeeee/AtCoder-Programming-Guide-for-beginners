#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N, M;
  cin >> N >> M;

  vector<int> A(M), B(M);
  
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
  vector<vector<char>> result(N, vector<char>(N));

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      result.at(i).at(j) = '-';
    }
  }

  for (int row = 0; row < N; row++) {
    for (int i = 0; i < M; i++) {

      if (A.at(i) == row + 1) {
        result.at(row).at(B.at(i) - 1) = 'o';
      }
      else if (B.at(i) == row + 1) {
        result.at(row).at(A.at(i) - 1) = 'x';
      }
    
    }
  }

  for (int i = 0; i < result.size(); i++) {
    for (int j = 0; j < result.at(0).size(); j++) {
      
      cout << result.at(i).at(j);
      
      if (j == result.at(0).size() - 1) {
        cout << endl;
      }
      else {
        cout << " ";
      }
    
    }
  }

}