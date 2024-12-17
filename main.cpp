vv#include <iostream>
#include <string>
using namespace std;

// Function prototypes
int getAccidentCount(string region);
void findSafestRegion(int north, int south, int east, int west, int central);

int main() {
    // Variables to store accident counts for each region
    int north, south, east, west, central;

    // Input: Get accident counts for each region with validation
    north = getAccidentCount("North");
    south = getAccidentCount("South");
    east = getAccidentCount("East");
    west = getAccidentCount("West");
    central = getAccidentCount("Central");

    // Process and Output: Determine and display the safest region
    findSafestRegion(north, south, east, west, central);

    return 0;
}

// Function to get accident count for a region with input validation
int getAccidentCount(string region) {
    int count;
    do {
        cout << "Enter the number of accidents in the " << region << " region: ";
        cin >> count;

        if (count < 0) {
            cout << "Invalid input! Number of accidents cannot be negative. Please try again.\n";
        }
    } while (count < 0);

    return count;
}

// Function to find and display the safest region
void findSafestRegion(int north, int south, int east, int west, int central) {
    // Find the region with the fewest accidents
    int minAccidents = north;
    string safestRegion = "North";

    if (south < minAccidents) {
        minAccidents = south;
        safestRegion = "South";
    }
    if (east < minAccidents) {
        minAccidents = east;
        safestRegion = "East";
    }
    if (west < minAccidents) {
        minAccidents = west;
        safestRegion = "West";
    }
    if (central < minAccidents) {
        minAccidents = central;
        safestRegion = "Central";
    }

    // Output the safest region
    cout << "\nThe safest region is the " << safestRegion << " region with " << minAccidents << " accidents." << endl;
}
