
// 38. Given a temperature in Celsius, convert it to Fahrenheit. Example:Input: 0 Output: 32.

#include <iostream>
using namespace std;

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    
    float fahrenheit = celsiusToFahrenheit(celsius);
    
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    
    return 0;
}
