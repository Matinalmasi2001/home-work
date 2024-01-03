#include <iostream>

using namespace std;

void fib(int arr[], int n) {
 
  arr[0] = 0;
  arr[1] = 1;

  for (int i = 2; i < n; i++) {
    arr[i] = arr[i - 1] + arr[i - 2];
  }
}

int main() {
  int arr[10];

  fib(arr, 10);
  for (int i = 0; i < 10; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}

