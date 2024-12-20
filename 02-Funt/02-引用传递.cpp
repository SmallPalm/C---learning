#include <iostream>
using namespace std;

// 引用传递
// 1. 传递引用时，不需要拷贝实参，直接使用实参的地址
// 2. 传递引用时，形参和实参共享同一块内存空间
// 3. 传递引用时，形参和实参的值会同时改变
// 4. 传递引用时，形参和实参的地址会相同
void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}
int main() {
  int a = 10;
  int b = 100000;
  swap(a, b);
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  return 0;
}