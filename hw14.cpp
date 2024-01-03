#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "enter n: ";
  cin >> n;

  int sum = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      sum += i;
    }
  }

  cout << "The sum of n divisors : " << sum << "\n";

  return 0;
}

