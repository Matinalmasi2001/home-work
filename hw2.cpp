#include <iostream>

using namespace std;

int main() {
 
  int salary;
  cout <<"enter your salary : ";
  cin >> salary;

 
  int tax = 0;
  if (salary < 6000000) {
    tax = 0;
  } else if (salary <= 8000000) {
    tax = salary * 0.05;
  } else if (salary <= 10000000) {
    tax = salary * 0.1;
  } else if (salary <= 14000000) {
    tax = salary * 0.15;
  } else if (salary <= 18000000) {
    tax = salary * 0.2;
  } else if (salary <= 25000000) {
    tax = salary * 0.25;
  } else {
    tax = salary * 0.35;
  }

 
  int finalSalary = salary - tax;

 
  cout << "your salary: " << finalSalary << "\n";

  return 0;
}

