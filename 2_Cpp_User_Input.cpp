#include <iostream>
using namespace std;

int main() {
  // C++ User Input

  // Input a number and output that number
  int a;
  cout << "Type a number and press enter: ";
  // taking user input
  cin >> a;
  // printing user input
  cout << "Your number is: " << a;

  // Creating a simple calculator
  cout << "\n\nCalculate sum of two numbers";
  int x, y;
  cout << "\nEnter a number: ";
  cin >> x;
  cout << "Enter another number: ";
  cin >> y;
  int sum = x + y;

  cout << "Sum is: " << sum;

  return 0;
}
