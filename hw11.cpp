#include <iostream>

using namespace std;

int main() {
  
  int arr1[5], arr2[5];

  
  for (int i = 0; i < 5; i++) {
    cout << " num " << i + 1 << "array 1 : ";
    cin >> arr1[i];
  }

 
  for (int i = 0; i < 5; i++) {
    cout << " num " << i + 1 << "array 2 : ";
    cin >> arr2[i];
  }

 
  for (int i = 0; i < 5; i++) {
    int temp = arr1[i];
    arr1[i] = arr2[i];
    arr2[i] = temp;
  }

 
  for (int i = 0; i < 5; i++) {
    cout << " num " << i + 1 << "array 1 : " << arr1[i] <<"\n";
  }

  
  for (int i = 0; i < 5; i++) {
    cout << " num " << i + 1 << "array 2 : " << arr2[i] << "\n";
  }

  return 0;
}

