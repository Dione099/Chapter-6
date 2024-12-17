#include <iostream>
#include <iomanip>
#include <cmath> // For ceil
using namespace std;

// Constants
const double COVERAGE_PER_GALLON = 110.0;
const double HOURS_PER_GALLON = 8.0;
const double LABOR_COST_PER_HOUR = 25.0;

// Function prototypes
double getValidatedInput(string prompt, double min);
void calculateAndDisplayResults(int numRooms, double paintPrice);

int main() {
    int numRooms = getValidatedInput("Enter the number of rooms to be painted: ", 1);
    double paintPrice = getValidatedInput("Enter the price of paint per gallon (minimum $10.00): ", 10.0);

    calculateAndDisplayResults(numRooms, paintPrice);
    return 0;
}

// Function to get validated input
double getValidatedInput(string prompt, double min) {
    double value;
    do {
        cout << prompt;
        cin >> value;
        if (value < min) {
            cout << "Invalid input! Value must be at least " << min << ".\n";
        }
    } while (value < min);
    return value;
}

// Function to calculate and display final results
void calculateAndDisplayResults(int numRooms, double paintPrice) {
    double totalSquareFootage = 0.0, squareFootage;

    for (int i = 1; i <= numRooms; i++) {
        squareFootage = getValidatedInput("Enter square footage for room " + to_string(i) + ": ", 0.0);
        totalSquareFootage += squareFootage;
    }

    int gallonsRequired = ceil(totalSquareFootage / COVERAGE_PER_GALLON);
    double laborHours = gallonsRequired * HOURS_PER_GALLON;
    double paintCost = gallonsRequired * paintPrice;
    double laborCost = laborHours * LABOR_COST_PER_HOUR;
    double totalCost = paintCost + laborCost;

    cout << fixed << setprecision(2);
    cout << "\nPaint Job Estimate:\n";
    cout << "-------------------\n";
    cout << "Gallons of paint required: " << gallonsRequired << endl;
    cout << "Hours of labor required: " << laborHours << endl;
    cout << "Cost of paint: $" << paintCost << endl;
    cout << "Labor charges: $" << laborCost << endl;
    cout << "Total cost: $" << totalCost << endl;
}
