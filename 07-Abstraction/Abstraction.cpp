#include <iostream>
using namespace std;

// Abstraction is the process of showing only essential details and hiding the complexities.
// In this example, 'Smartphone' is an abstract base class that defines common functions
// for taking selfies and making calls. The specific details of how these actions are performed
// are left for the derived classes to implement, abstracting away the details.

class Smartphone {
public:
    // Pure virtual function for taking a selfie.
    // Derived classes must provide their own implementation of this function.
    virtual void takeSelfie() = 0;

    // Pure virtual function for making a call.
    // Derived classes must implement this function as well.
    virtual void makeCall() = 0;
};

// 'Android' class is a derived class of 'Smartphone' and provides
// its own implementations for 'takeSelfie' and 'makeCall'.
class Android : public Smartphone {
public:
    // Implementation of the 'takeSelfie' function for Android.
    void takeSelfie() {
        cout << "Android Selfie." << endl;
    }

    // Implementation of the 'makeCall' function for Android.
    void makeCall() {
        cout << "Android Calling...." << endl;
    }
};

// 'Iphone' class is another derived class of 'Smartphone' that provides
// its own versions of 'takeSelfie' and 'makeCall'.
class Iphone : public Smartphone {
public:
    // Implementation of the 'takeSelfie' function for iPhone.
    void takeSelfie() {
        cout << "Iphone Selfie." << endl;
    }

    // Implementation of the 'makeCall' function for iPhone.
    void makeCall() {
        cout << "Iphone Calling...." << endl;
    }
};

int main() {
    // Creating a base class pointer 's1' pointing to an 'Android' object.
    // This demonstrates polymorphism, where a base class pointer can point to a derived class object.
    Smartphone* s1 = new Android();
    s1->takeSelfie();  // Calls the 'takeSelfie' function specific to Android.

    // Creating another base class pointer 's2' pointing to an 'Iphone' object.
    Smartphone* s2 = new Iphone();
    s2->takeSelfie();  // Calls the 'takeSelfie' function specific to iPhone.
    
    s2->makeCall();    // Calls the 'makeCall' function specific to iPhone.

    return 0;
}
