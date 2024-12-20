#include <iostream>
using namespace std;

int main() {
  // 光初始化arr[5]的值，不赋值的元素，默认值为0,
  int arr[5];

  // 定义始化数组元素
  int arr2[5] = {1, 2, 3, 4, 5};

  // 只初始化前三个元素，后面的元素默认值为0
  int arr3[5] = {1, 2, 3};

  for (int i = 0; i < 5; i++) {
    cout << arr[i] << endl;
    cout << arr2[i] << endl;
    cout << arr3[i] << endl;
  }
  return 0;
}