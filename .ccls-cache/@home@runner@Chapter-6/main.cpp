#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype for converting Fahrenheit to Celsius
double fahrenheitToCelsius(int fahrenheit);

int main() {
    // Output the table header
    cout << "Fahrenheit to Celsius Temperature Table" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Fahrenheit\tCelsius" << endl;
    cout << "---------------------" << endl;

    // Loop through Fahrenheit temperatures from 0 to 20
    for (int fahrenheit = 0; fahrenheit <= 20; fahrenheit++) {
        double celsius = fahrenheitToCelsius(fahrenheit); // Convert to Celsius
        cout << setw(9) << fahrenheit << "\t" << fixed << setprecision(2) << celsius << endl;
    }

    return 0;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(int fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}
