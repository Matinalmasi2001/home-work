#include <iostream>

using namespace std;

int gcd(int n, int m) {
  
  if (m == 0) {
    return n;
  }
  return gcd(m, n % m);
}

int main() {
  
  int n, m;
  cout << "enter n and m : ";
  cin >> n >> m;

  int gcd_result = gcd(n, m);
  cout << "bmm of " << n << " and " << m << "is  : " << gcd_result << "\n";
  return 0;
}

