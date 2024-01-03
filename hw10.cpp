#include <iostream>

using namespace std;

int main() {
  
  int arr[10];

  
  for (int i = 0; i < 10; i++) {
    cout << "num " << i + 1 << ": ";
    cin >> arr[i];
  }

 
  int max = arr[0];
  int min = arr[0];
  for (int i = 1; i < 10; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
    if (arr[i] < min) {
      min = arr[i];
    }
  }

 
  double avg = (max + min) / 2.0;

  
  cout << " The average of the largest and smallest number of the array is: " << avg << "\n";

  return 0;
}

