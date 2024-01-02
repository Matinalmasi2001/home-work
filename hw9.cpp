#include <iostream>

using namespace std;

bool isPrime(int n) {
 
  if (n < 2) {
    return false;
  }

  for (int i = 2; i <= n - 1; i++) {
    
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  int n;
  cout << "enter n: ";
  cin >> n;


  int sum = 0;

  for (int i = 2; i <= n - 1; i++) {
    
    if (isPrime(i)) {
      sum += i;
    }
  }

  cout << " The sum of all prime numbers smaller than " << n << " is: " << sum << endl;

  return 0;
}

