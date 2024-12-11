#include <iostream>
using namespace std; 

class first {
    public:
        int x = 4;
        void show()
            {cout << x << endl;}
};

class second : public first {
    public: 
        int y = 2*x;
        
};

int main () {
    second out;
    cout << "The value of y is: " << out.y << endl;
    return 0; 
}