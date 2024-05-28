#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
using std::string;

enum MealType { NO_PREF, REGULAR, LOW_FAT, VEGETARIAN };

// Structure declaration
struct Passenger {
    string      name;
    MealType    mealPref;
    bool        isFreqFlyer;
    string      freqFlyerNo;
};

int main() {
    // Structure usage
    Passenger pass = { "John Smith", REGULAR, true, "385MRCHAA" };

    // Structure copy
    Passenger pass2 = pass;

    // Structure member accessing and modification
    cout << "Passenger name: " << pass.name << endl;
    pass.name = "Marco Cordero";
    cout << "New name: " << pass.name << endl;
    cout << "Old passenger name: " << pass2.name << endl;

    return EXIT_SUCCESS;
}
