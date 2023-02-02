#include <bits/stdc++.h>
using namespace std;


int fn (int x) {
  x = x * 2;
  return x;
}


int fn2 (int &x) {
  x = x * 2;
  return x;
} 


void min_and_max(int a, int b, int c, int &minimum, int &maximum) {
  minimum = min(a, min(b,c));
  maximum = max(a, max(b,c));
}


int main() {

  int a = 3;
  int &b = a;

  cout << a << endl;
  cout << b << endl;

  b = 4;

  cout << a << endl;
  cout << b << endl;

  vector<int> vec1 = {1, 2, 3, 4};
  vector<int> &vec2 = vec1;

  for (int i = 0; i < vec1.size(); i++) {
    cout << vec1.at(i);

    if (i == vec1.size() - 1) {
      cout << endl;
    }
    else {
      cout << " ";
    }

  }

  for (int i = 0; i < vec2.size(); i++) {
    cout << vec2.at(i);

    if (i == vec2.size() - 1) {
      cout << endl;
    }
    else {
      cout << " ";
    }

  }

  b = b + 1;
 
  cout << a << endl;
  cout << b << endl;

  string s = "apg4b";
  string &t = s;

  cout << s << endl;
  cout << t << endl;

  t.at(0) = 'A';
  t.at(1) = 'P';
  t.at(2) = 'G';

  cout << s << endl;
  cout << t << endl;

  b = fn(a);

  cout << a << endl;
  cout << b << endl;

  int c = 3;
  int d = fn(c);

  cout << c << endl;
  cout << d << endl;

  d = fn2(c);

  cout << c << endl;
  cout << d << endl;

  int minimum, maximum;

  min_and_max(3, 1, 5, minimum, maximum);

  cout << minimum << endl;
  cout << maximum << endl;

}
