#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

vector<int> ConstructVector() { return vector<int>{1, 2, 3, 4, 5}; }

void PrintData(const vector<int>& output) {
  cout << "---" << endl;
  for (int val : output) {
    cout << val << endl;
  }
}

void Test_reverse_all() {
  vector<int> data = ConstructVector();
  PrintData(data);

  reverse(data.begin(), data.end());

  PrintData(data);
}

void Test_reverse_partially() {
  vector<int> data = ConstructVector();
  PrintData(data);

  reverse(data.begin(),
          data.begin() + int(distance(data.begin(), data.end()))/2 );

  PrintData(data);
}

int main() {
  std::cout << "Welcome to waylon.one" << std::endl;

  std::cout << "Test 1" << std::endl;
  Test_reverse_all();

  std::cout << "Test 2" << std::endl;
  Test_reverse_partially();

  return 0;
}
