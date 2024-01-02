#include <iostream>

using namespace std;
int main(){
 
  int n, m;
  cout << "enter two + number: ";
  cin >> n >> m;

  int mod = m;

  int div = 0;

  while (mod >= n) {
    div++;

    mod -= n;
  }

  cout << "baghi mande : " << mod << "\n";
  cout << "kharj ghasmat : " << div << "\n";
}

