#include <iostream>
using namespace std;

int main() {
  int a, n;
  cin >> a >> n;
  int result = a;
  for(int i = 0; i < n-1; i++) {
    result *= a;
  }
  printf("%d", result);
  return 0;
}