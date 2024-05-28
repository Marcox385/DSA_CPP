#include <cstdlib>
#include <iostream>
#include <string>
using std::string;
using namespace std;

struct Passenger {
    string  name;
    bool    isFreqFlyer;
    string  freqFlyerNo = "NONE";
};

bool operator==(const Passenger& x, const Passenger& y) {
    return x.name == y.name
        && x.isFreqFlyer == y.isFreqFlyer
        && x.freqFlyerNo == y.freqFlyerNo;
}

ostream& operator<<(ostream& out, const Passenger& pass) {
    out << pass.name;

    if (pass.isFreqFlyer)
        out << " " << pass.freqFlyerNo;
    
    return out;
}

int main() {
    Passenger pass1 = { "Marco Cordero", false };
    Passenger pass2 = pass1;
    Passenger pass3 = { "Ricardo Hernández", true, "496RH" };

    cout << "Is pass1 == pass2? " << (pass1 == pass2) << endl;
    cout << "Is pass1 == pass3? " << (pass1 == pass3) << endl;

    cout << pass3 << endl;

    return EXIT_SUCCESS;
}
