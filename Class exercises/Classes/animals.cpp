#include <iostream>
using namespace std; 

class Animals {
    public:
        int legs = 4;
};

class Dog : public Animals {
    public: 
        int tail = 1;
};

int main () {
    Dog d;
    cout << "The legs are: " << d.legs << endl;
    cout << "The tail is: " << d.tail;
    return 0; 
}