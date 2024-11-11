#include <iostream>
using namespace std;

// 'Instrument' is an abstract class, meaning it cannot be instantiated directly.
// An abstract class has at least one pure virtual function, which is a virtual
// function set to `0`, indicating that it must be overridden in derived classes.
class Instrument {
public:
    // Declaring 'makeSound' as a pure virtual function.
    // This means every derived class must provide its own implementation of 'makeSound'.
    virtual void makeSound() = 0;
};

// 'Accordian' class is a derived class of 'Instrument'.
// Since 'Instrument' has a pure virtual function, 'Accordian' must override 'makeSound'.
class Accordian : public Instrument {
public:
    // 'makeSound' implementation for 'Accordian'.
    void makeSound() {
        cout << "Accordian is playing...." << endl;
    }
};

// 'Piano' class is another derived class of 'Instrument'.
// It must also provide its own version of 'makeSound' to satisfy the requirements of the base class.
class Piano : public Instrument {
public:
    // 'makeSound' implementation for 'Piano'.
    void makeSound() {
        cout << "Piano is playing...." << endl;
    }
};

int main() {
    // Creating a base class pointer 'i1' that points to an 'Accordian' object.
    Instrument* i1 = new Accordian();

    // Creating another base class pointer 'i2' that points to a 'Piano' object.
    Instrument* i2 = new Piano();

    // Storing both 'Accordian' and 'Piano' objects in an array of 'Instrument' pointers.
    // This demonstrates polymorphism, as both objects can be treated as 'Instrument'.
    Instrument* instruments[2] = {i1, i2};

    // Looping through the array and calling 'makeSound' for each object.
    // Since 'makeSound' is a pure virtual function in the base class and
    // overridden in each derived class, the specific 'makeSound' for each
    // derived class is called at runtime (runtime polymorphism).
    for (int i = 0; i < 2; i++) {
        instruments[i]->makeSound();
    }

    return 0;
}
