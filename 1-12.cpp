#include <bits/stdc++.h>
using namespace std;

int main() {

  string str1;
  cout << "文字列を入力してください" << endl;
  cin >> str1;

  string str2 = ",world!";

  cout << str1 << str2 << endl;
  cout << str1.size() << endl;
  cout << str1.at(0) << endl;
  cout << str1.at(4) << endl;

  char c = 'a';
  cout << c << endl;

  char ch = str1.at(0);
  cout << ch << endl;

  str2.at(0) = ch;
  cout << str2 << endl;

  if (str1.at(1) == 'e') {
    cout << "AtCoder" << endl;
  }

  int count = 0;

  for (int i = 0; i < str1.size(); i++) {
    if (str1.at(i) == 'o') {
      count++;
    }
  }

  cout << count << endl;

  string str3 = "こんにちは";
  //stringやcharにおいて全角文字（日本語）は表示はできるが、
  cout << str3.size() << endl;
  //メソッドなどは扱えない（文字化けする）
  cout << str3.at(0) << endl;

  string s1 = "ABC";
  string s2 = "ABC";
  string s3 = "XY";

  if (s1 == s2) {
    cout << "ABC == ABC" << endl;
  }

  if (s1 < s3) {
    cout << "ABC < XY" << endl;
  }

  if ("ABC"s < "xyz"s) {
    cout << "辞書順" << endl;
  }

  cout << s1 + s2 + s3 << endl;

  s1 += s2;
  
  cout << s1 << endl;

  string aaa;
  string bbb;

  cout << "1行目" << endl;
  getline (cin, aaa);

  cout << "2行目" << endl;
  getline (cin, bbb);

  cout << aaa << endl;
  cout << bbb << endl;
}