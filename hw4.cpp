#include <iostream>

using namespace std;

int power(int x, int y) {
 
  if (y == 0) {
    return 1;
  }
  return x * power(x, y - 1);
}
int main() {
  int x, y;
  cout << "enter x : ";
  cin >> x;
  cout << "enter y : ";
  cin >> y;
 
  int result = power(x, y);

  
  cout << x << " power " << y << " is : " << result << "\n";

  return 0;
}

