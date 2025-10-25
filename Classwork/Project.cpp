#include <iostream>
#include <string>
#include <cstdlib>   // for rand(), srand()
#include <ctime>     // for time()

using namespace std;

int main() {
    // Step 1: Declare variables
    string name, courseName, locationName;
    bool isPAU;
    int courseChoice, locationChoice;
    int days = 0, regFee = 0;
    int lodgingPerDay = 0;
    double lodgingCost = 0, total = 0;
    double lodgingDiscount = 0, regDiscount = 0;
    int promo = 0;
    int r;

    // Step 2: Input section
    cout << "Enter full name: ";
    getline(cin, name);

    cout << "Is PAU student? (1=true, 0=false): ";
    cin >> isPAU;

    cout << "Enter course (1-5): ";
    cin >> courseChoice;

    cout << "Enter location (1-5): ";
    cin >> locationChoice;

    // Step 3: Determine course details using multi-way if-else
    if (courseChoice == 1) {
        courseName = "Photography";
        days = 3;
        regFee = 10000;
    } else if (courseChoice == 2) {
        courseName = "Painting";
        days = 5;
        regFee = 8000;
    } else if (courseChoice == 3) {
        courseName = "Fish Farming";
        days = 7;
        regFee = 15000;
    } else if (courseChoice == 4) {
        courseName = "Baking";
        days = 5;
        regFee = 13000;
    } else if (courseChoice == 5) {
        courseName = "Public Speaking";
        days = 2;
        regFee = 5000;
    } else {
        cout << "Invalid course choice!" << endl;
        return 0;
    }

    // Step 4: Determine lodging details
    if (locationChoice == 1) {
        locationName = "Camp House A";
        lodgingPerDay = 10000;
    } else if (locationChoice == 2) {
        locationName = "Camp House B";
        lodgingPerDay = 2500;
    } else if (locationChoice == 3) {
        locationName = "Camp House C";
        lodgingPerDay = 5000;
    } else if (locationChoice == 4) {
        locationName = "Camp House D";
        lodgingPerDay = 13000;
    } else if (locationChoice == 5) {
        locationName = "Camp House E";
        lodgingPerDay = 5000;
    } else {
        cout << "Invalid location choice!" << endl;
        return 0;
    }

    // Step 5: Compute lodging cost
    lodgingCost = lodgingPerDay * days;

    // Step 6: Apply discounts using logical operators
    // Lodging discount: PAU student and Camp House A or B
    if (isPAU && (locationChoice == 1 || locationChoice == 2)) {
        lodgingDiscount = 0.05 * lodgingCost;
        lodgingCost -= lodgingDiscount;
    }

    // Registration discount: days > 5 OR regFee > 12000
    if ((days > 5) || (regFee > 12000)) {
        regDiscount = 0.03 * regFee;
        regFee -= regDiscount;
    }

    // Step 7: Random promo draw
    srand(time(0));
    r = rand() % 100 + 1; // random number between 1 and 100

    if (r == 7 || r == 77) {
        promo = 500;
    }

    // Step 8: Compute total
    total = regFee + lodgingCost - promo;

    // Step 9: Display results
    cout << "\n===== REGISTRATION SUMMARY =====\n";
    cout << "Name: " << name << "   (PAU student: " << (isPAU ? "Yes" : "No") << ")\n";
    cout << "Course: " << courseName << "   Days: " << days << endl;
    cout << "Registration: ?" << regFee << "  (reg discount: ?" << regDiscount << ")\n";
    cout << "Lodging: ?" << lodgingPerDay << " × " << days << " = ?" 
         << lodgingPerDay * days << "  (lodging discount: ?" << lodgingDiscount << ")\n";
    cout << "Random draw: " << r << "  Promo applied: ?" << promo << endl;
    cout << "TOTAL: ?" << total << endl;

    return 0;
}

