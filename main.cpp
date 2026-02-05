# include <iostream>
using namespace std;

int sum(int x, int y) {

  return x + y;

}

int main() {

  int num1, num2;

  std::cout << "Enter the first integer: ";

  std::cin >> num1;

  std::cout << "Enter the second integer: ";

  std::cin >> num2;

  int result = sum(num1, num2);

  std::cout << "The sum of " << num1 << " and " << num2 << " is: " << result << std::endl;

  return 0;

}