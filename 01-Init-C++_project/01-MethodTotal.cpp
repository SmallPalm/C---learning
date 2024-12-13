#include <iostream>
using namespace std;

int main()
{
  // 定义两个整数类型的变量
  int n, m;
  // 定义一个总数
  int total = 0;
  // 输入 n 和 m
  cin >> n >> m;
  // 从1开始
  for(int i = 1; i < n; ++i) {
    
    // 获取每次的i + 1； 当j 小于或等于n时，J加一次
    for(int j = i + 1; j <= n; ++j) {

      // 判断m取余的 每次的i和j，如果为0
      if(m % (i + j) == 0) 
      // 那就total加一次
        ++total;
    }
  }
  cout << total << endl;
  cout << "n:" << n << "m:" << m << endl;

  return 0;
}