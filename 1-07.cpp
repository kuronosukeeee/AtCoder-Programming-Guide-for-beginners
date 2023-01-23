#include <bits/stdc++.h>
using namespace std;

int main()
{
  cout << (5 < 10) << endl;
  cout << (5 > 10) << endl;

  if (1)
  {
    cout << "Hello" << endl;
  }

  if (0)
  {
    cout << "world" << endl;
  }

  if (true)
  {
    cout << "Hello" << endl;
  }

  if (false)
  {
    cout << "world" << endl;
  }

  int x;
  cin >> x;

  bool a = true;
  bool b = x < 10;
  bool c = false;

  if (a && b)
  {
    cout << "hello" << endl;
  }
  if (c)
  {
    cout << "world" << endl;
  }

  bool d = 10;
  bool e = 0;
  cout << d << endl;
  cout << e << endl;

  if (100)
  {
    cout << "hello" << endl;
  }
}