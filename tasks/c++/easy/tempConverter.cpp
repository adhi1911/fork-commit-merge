#include <iostream>
using namespace std;

int main() {
  // TODO: Implement the temperature converter
  double celcius, fahrenheit;
  cout << "Enter the temperature in Celcius: ";
  cin >> celcius;
  fahrenheit = (celcius * 9.0) / 5.0 + 32.0;
  cout << "The temperature in Fahrenheit is: " << fahrenheit << endl;

  return 0;
}