#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
using std::string;

struct Passenger {
    string  name;
    bool    isFreqFlyer;
    string  freqFlyerNo;
};

void print(int x) {
    cout << x << endl;
}

void print(const Passenger& pass) {
    cout << pass.name;

    if (pass.isFreqFlyer)
        cout << " " << pass.freqFlyerNo;
    
    cout << endl;
}

int main() {
    int my_int = 385;
    Passenger me = {
        "Marco Cordero", true, "MRCH385"
    };

    print(my_int);
    print(me);

    return EXIT_SUCCESS;
}
