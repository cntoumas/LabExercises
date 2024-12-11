#include <iostream>
using namespace std;

class shape {
    public:
        float x=5;
        float y=8;
};



class area : public shape {
    public:
        float E=x*y;
};

int main (){
    area out;
    cout << "The area of the shape is: " << out.E << endl;
    return 0;
}