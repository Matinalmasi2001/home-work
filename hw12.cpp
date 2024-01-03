#include <iostream>

using namespace std;

void insert(int arr[], int n, int x) {
 
  int i;
  for (i = 0; i < n; i++) {
    if (arr[i] > x) {
      break;
    }
  }
 
  for (int j = n - 1; j >= i; j--) {
    arr[j + 1] = arr[j];
  }

  arr[i] = x;
}

int main() {
 
  int arr[10];

  for (int i = 0; i < 9; i++) {
    arr[i] = i + 1;
  }

  int x;
  cout << "enter x : ";
  cin >> x;

 
  insert(arr, 9, x);

  for (int i = 0; i < 10; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}

