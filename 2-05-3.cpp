#include <bits/stdc++.h>
using namespace std;

int array_sum(vector<int>&);
int array_sum_from_i(vector<int>&, int);

int main() {
  vector<int> arr(5);
  
  for (int i = 0; i < arr.size(); i++) {
    cin >> arr.at(i);
  }

  cout << array_sum(arr) << endl;
}

int array_sum(vector<int> &arr) { 
  int sum = array_sum_from_i(arr, 0);
  return sum;
}

int array_sum_from_i(vector<int> &arr, int i) {
  if (i == arr.size() - 1) {
    return arr.at(i);
  }

  int sum = array_sum_from_i(arr, i + 1);
  return sum + arr.at(i);
}