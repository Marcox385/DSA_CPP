#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
using std::string;

enum MealType { NO_PREF, REGULAR, LOW_FAT, VEGETARIAN };

struct Passenger {
    string      name;
    MealType    mealPref;
    bool        isFreqFlyer;
    string      freqFlyerNo;
};

int main() {
    Passenger *p;

    p = new Passenger;
    p->name = "Marco Cordero";
    (*p).mealPref = NO_PREF;
    p->isFreqFlyer = false;
    (*p).freqFlyerNo = "NONE";

    // Curly braces can't be used with this form
    // Use classes instead

    cout << "Passenger meal preference: " << p->mealPref << endl;

    // Delete object
    delete p;

    // Array creation
    char *buffer = new char[500];
    buffer[385] = 'a';
    cout << 385[buffer] << endl; // This works ;)
    delete[] buffer;

    return EXIT_SUCCESS;
}
