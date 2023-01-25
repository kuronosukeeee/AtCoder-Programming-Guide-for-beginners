#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  str = "abcd";

  cout << str.at(0) << endl;
  cout << str.size() << endl;

  vector<int> vec;
  vec = {25, 100, 64};

  cout << vec.at(0) << endl;
  cout << vec.size() << endl;

  int a1, a2, a3;
  cin >> a1 >> a2 >> a3;

  cout << a1 + a2 + a3 << endl;

  vector<int> vec2(3);
  cin >> vec2.at(0) >> vec2.at(1) >> vec2.at(2);

  cout << vec2.at(0) + vec2.at(1) + vec2.at(2) << endl;

  // vector<int> vec3(100);

  // for (int i = 0; i < 100; i++) {
  //   cin >> vec3.at(i);
  // }

  vector<int> vec4 = {1, 2, 3};
  vec4.push_back(10);

  for (int i = 0; i < vec4.size(); i++) {
    cout << vec4.at(i) << endl;
  }

  vector<int> vec5 = {1, 2, 3};
  vec5.pop_back();

  for (int i = 0; i < vec5.size(); i++) {
    cout << vec5.at(i) << endl;
  }

  vector<int> vec6 = {1, 2, 3};
  vector<int> vec7 = {1, 2, 3};

  if (vec6 == vec7) {
    cout << "ok" << endl;
  }

}