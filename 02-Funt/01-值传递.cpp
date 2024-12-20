#include <iostream>
using namespace std;

void foo(int a) {
  a = 10;
};
int main() {
  int b = 5;


  foo(b);


  cout << "b = " << b << endl;
  return 0;
};