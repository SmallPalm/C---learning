#include <iostream>
using namespace std;

int main() {
  int sum = 0;
  int count = 0;
  while(count <= 100) {
    count++;
    sum += count;
  }

  cout << sum << endl;
  return 0;
}