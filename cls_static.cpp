// WACPP program to count the number of objects of the class created 

#include <iostream>
using namespace std;

class cls {
public:
    static int objcntr;   // static variable to count objects

    cls() {
        objcntr++;        // increment count whenever object is created
    }

    int displayObjCount() {
        return objcntr;
    }
};

// initialize static variable
int cls::objcntr = 0;

int main() {
    cls c1;
    cls c2;
    cls c3;

    cout << "\nNumber of objects created: " << cls::objcntr;

    cout << endl;
    return 0;
}
