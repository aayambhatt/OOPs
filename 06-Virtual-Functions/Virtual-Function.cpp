#include <iostream>
using namespace std;

// The 'Instrument' class is a base class (or parent class) with a virtual function.
// This base class is intended to be inherited by other instrument-specific classes.
class Instrument {
public:
    // Declaring 'makeSound' as a virtual function allows derived classes
    // to override this function with their specific implementations.
    virtual void makeSound() {
        cout << "Instrument is playing....." << endl;
    }
};

// 'Accordian' class is a derived class that inherits from 'Instrument'.
// It provides its own version of the 'makeSound' function.
class Accordian : public Instrument {
public:
    // The 'makeSound' function here overrides the virtual function in the base class.
    // This means it provides a specific implementation for when the object is an Accordian.
    void makeSound() {
        cout << "Accordian is playing...." << endl;
    }
};

int main() {
    // Here, we create a pointer to an 'Instrument' object, but we instantiate it as an 'Accordian'.
    // This demonstrates *polymorphism*, where a base class pointer (Instrument*) can point to
    // a derived class object (Accordian).
    Instrument* i1 = new Accordian();

    // Using the pointer to call 'makeSound'. Since 'makeSound' is a virtual function,
    // C++ will call the 'makeSound' implementation in the 'Accordian' class (not the base 'Instrument' class).
    // This demonstrates *runtime polymorphism*, where the appropriate function is selected at runtime.
    i1->makeSound();

    return 0;
}
