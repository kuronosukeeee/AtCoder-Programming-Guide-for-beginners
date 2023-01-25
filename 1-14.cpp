#include <bits/stdc++.h>
using namespace std;

int main() {
  int a = 10, b = 5;
  int answer;

  if (a < b) {
    answer = a;
  }
  else {
    answer = b;
  }

  cout << answer << endl;

  answer = min(a, b);

  cout << answer << endl;

  answer = max(a, b);

  cout << answer << endl;

  swap(a, b);

  cout << a << endl;
  cout << b << endl;

    vector<int> vec = {1, 5, 3};
  reverse(vec.begin(), vec.end());

  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << endl;
  }

  vector<int> vec2 = {2, 5, 2, 1};
  sort(vec2.begin(), vec2.end());

  for (int i = 0; i < vec2.size(); i++) {
    cout << vec2.at(i) << endl;
  }

  reverse(vec2.begin(), vec2.end());

  for (int i = 0; i < vec2.size(); i++) {
    cout << vec2.at(i) << endl;
  }
}
