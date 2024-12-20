#include <iostream>
using namespace std;

// 指针传递
// 交换两个变量的值
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main() {
  int a = 10, b = 20;
  // 指针传递
  swap(&a, &b);
  cout << "a = " << a << ", b = " << b << endl;
  return 0;
}