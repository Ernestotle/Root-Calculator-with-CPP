#include <iostream>
#include <cmath>

int main() {
  // Declare the variables
  double a;
  double b;
  double c;

  // Take the user input
  std::cout << "Enter a:";
  std::cin >> a;

  std::cout << "Enter b:";
  std::cin >> b;

  std::cout << "Enter c:";
  std::cin >> c;

  // Declare the roots as variables
  double root1;
  double root2;

  // Calculate the roots
  root1 = (-b + std::sqrt(b * b - 4 * a * c)) / (2 * a);
  root2 = (-b - std::sqrt(b * b - 4 * a * c)) / (2 * a);

  // Output the roots
  std::cout << "First root: " << root1 << "\n";
  std::cout << "Second root: " << root2 << "\n";

  return 0;
}