#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
double getPositiveValue(string prompt);
double calculatePerimeter(double length, double width);
double calculateArea(double length, double width);
void displayResults(double perimeter, double area);

int main() {
    char choice;
    do {
        // Input: Get length and width 
        double length = getPositiveValue("Enter the length of the rectangle: ");
        double width = getPositiveValue("Enter the width of the rectangle: ");

        // Process: Calculate perimeter and area
        double perimeter = calculatePerimeter(length, width);
        double area = calculateArea(length, width);

        // Output: Display results
        displayResults(perimeter, area);

        // Ask if the user wants to process another rectangle
        cout << "\nDo you want to process another rectangle? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "\nThank you for using the program!" << endl;
    return 0;
}
double getPositiveValue(string prompt){
    double value;
  do{
    cout << prompt;
    cin >> value;
    if(value <= 0){
      cout<< "Invalid input. Please enter a positive value." << endl;
    }
  }while (value<=0);
  return value;
  }
// Function to calculate the perimeter of the rectangle
double calculatePerimeter(double length, double width) {
    return 2 * (length + width);
}

// Function to calculate the area of the rectangle
double calculateArea(double length, double width) {
    return length * width;
}

// Function to display the results
void displayResults(double perimeter, double area) {
    cout << fixed << setprecision(2);
    cout << "\nRectangle Properties:\n";
    cout << "Perimeter: " << perimeter << " units\n";
    cout << "Area: " << area << " square units\n";
}