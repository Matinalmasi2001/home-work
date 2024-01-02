#include <iostream>

using namespace std;

int gcd(int x, int y) {
 
  if (y == 0) {
    return x;
  }
  return gcd(y, x % y);
}

int main() {
  
  int x, y;
  cout << "enter x : ";
  cin >> x;
  cout << "enter y : ";
  cin >> y;
  int result = gcd(x, y);
  cout << " The greatest divisor " << x << " and " << y << " is : " << result << "\n";

  return 0;
}

