#include <bits/stdc++.h>
using namespace std;

// int sum(int n) {
//   if (n == 0) {
//     return 0;
//   }
//   int s = sum(n - 1);
//   return s + n;
// }

// int sum_range(int a, int b) {
//   if (a == b) {
//     return a;
//   }
//   int sum = sum_range(a, b - 1) + b;
//   return sum;
// }

// int array_sum_from_i(vector<int> &data, int i) {
//   if (i == data.size()) {
//     return 0;
//   }
//   int s = array_sum_from_i(data, i + 1);
//   return data.at(i) + s;
// }

// int array_sum(vector<int> &data) { return array_sum_from_i(data, 0); }

// bool has_divisor(int N, int i) {
//   if (i == N) {
//     return false;
//   } else if (N % i == 0) {
//     return true;
//   }

//   return has_divisor(N, i + 1);
// }

// bool is_prime(int N) {
//   if (N == 1) {
//     return false;
//   } else if (N == 2) {
//     return true;
//   } else {
//     return !has_divisor(N, 2);
//   }
// }

// vector<int> reverse_array_from_i(vector<int> &data, int i) {
//   if (i == data.size()) {
//     vector<int> empty_array(0);
//     return empty_array;
//   }

//   vector<int> tmp = reverse_array_from_i(data, i + 1);
//   tmp.push_back(data.at(i));
//   return tmp;
// }

// vector<int> reverse_array(vector<int> &data) {
//   return reverse_array_from_i(data, 0);
// }

// int main() {
//   cout << sum(2) << endl;
//   cout << sum(3) << endl;
//   cout << sum(10) << endl;

//   cout << sum_range(3, 7) << endl;
//   cout << sum_range(0, 4) << endl;
//   cout << sum_range(5, 8) << endl;

//   vector<int> a = {0, 3, 9, 1, 5};
//   vector<int> b = {1, 2, 3, 4, 5};

//   cout << array_sum(a) << endl;
//   cout << array_sum(b) << endl;

//   cout << is_prime(1) << endl;
//   cout << is_prime(2) << endl;
//   cout << is_prime(12) << endl;
//   cout << is_prime(13) << endl;
//   cout << is_prime(57) << endl;

//   vector<int> c = {1, 2, 3, 4, 5};
//   vector<int> d = reverse_array(c);

//   for (int i = 0; i < d.size(); i++) {
//     cout << d.at(i);
//     if (i == d.size() - 1) {
//       cout << endl;
//     }
//     else {
//       cout << " ";
//     }
//   }
// }

// x番の組織について、子組織からの報告書が揃った時刻を返す
// childrenは組織の関係を表す2次元配列(参照渡し)
// int complete_time(vector<vector<int>> &children, int x) {
//   if (children.at(x).size() == 0) {
//     return 0;
//   }

//   int max_receive_time = 0;

//   for (int c : children.at(x)) {
//     int receive_time = complete_time(children, c) + 1;
//     max_receive_time = max(max_receive_time, receive_time);
//   }
//   return max_receive_time;
// }

// // これ以降の行は変更しなくてよい

// int main() {
//   int N;
//   cin >> N;

//   vector<int> p(N);  // 各組織の親組織を示す配列
//   p.at(0) = -1;  // 0番組織の親組織は存在しないので-1を入れておく
//   for (int i = 1; i < N; i++) {
//     cin >> p.at(i);
//   }

//   // 組織の関係から2次元配列を作る(理解しなくてもよい)
//   vector<vector<int>> children(N);  // ある組織の子組織の番号一覧  //
//   N×0の二次元配列 for (int i = 1; i < N; i++) {
//     int parent = p.at(i);  // i番の親組織の番号
//     children.at(parent).push_back(i);  // parentの子組織一覧にi番を追加
//   }

//   // 0番の組織の元に報告書が揃う時刻を求める
//   cout << complete_time(children, 0) << endl;
// }

// bool is_even(int);
// bool is_odd(int);

// bool is_even(int n) {
//   if (n == 0) {
//     return true;
//   }
//   return is_odd(n - 1);
// }

// bool is_odd(int n) {
//   if (n == 0) {
//     return false;
//   }
//   return is_even(n - 1);
// }

// int main() {
//   cout << is_even(4) << endl;
//   cout << is_even(3) << endl;
//   cout << is_odd(5) << endl;
//   cout << is_odd(6) << endl;
// }
 
// num個分のスペースからなる文字列を返す (字下げに用いる)
string space(int num) {
  string ret = "";
  for (int i = 0; i < num; i++) {
    ret += " ";
  }
  return ret;
}
 
// 呼び出しの深さに応じて字下げし、関数の開始時点であるというメッセージを出力
void print_in(int n, int depth) {
  cout << space(depth * 4) << "func(" << n << ", " << depth << ") in" << endl;
}
 
// 呼び出しの深さに応じて字下げし、関数の終了時点であるというメッセージを出力
void print_out(int n, int depth) {
  cout << space(depth * 4) << "func(" << n << ", " << depth << ") out" << endl;
}
 
// n: 何回の再帰呼出しを行うか
// depth: 呼び出しの深さ(何回目の再帰呼び出しか)
void func(int n, int depth) {
  // ベースケース
  if (n == 0) {
    print_in(n, depth);   // 開始
    print_out(n, depth);  // 終了
    return;
  }
 
  // 再帰ステップ
  print_in(n, depth);  // 開始
  func(n - 1, depth + 1);  // 残り回数を1減らし、呼び出しの深さを1増やす
  print_out(n, depth); // 終了
}
 
int main() {
  func(3, 0);  // 3回の再帰呼び出しを行う, 初めの深さを0とする
}
