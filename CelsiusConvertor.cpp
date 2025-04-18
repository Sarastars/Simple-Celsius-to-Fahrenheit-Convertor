#include <iostream>

using namespace std;
void readCelsius(float &CelsiusDegree) {
	cout << "Enter Temperature Degree in Celcius Unit!" << endl;
	cin >> CelsiusDegree;
}
float convertCelsiusToFahrenheit(float CelsiusDegree) {
	return (CelsiusDegree * 9 / 5) + 32;
}
int main() {
	float CelsiusDegree;
	readCelsius(CelsiusDegree);
	cout << "Temperature Degree in Fahrenheit : " << convertCelsiusToFahrenheit(CelsiusDegree)  << " F°" << endl;

	return 0;
}
