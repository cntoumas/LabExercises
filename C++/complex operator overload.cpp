#include <iostream>
#include <cmath>
using namespace std;

class complex{
    public:
        double x, y, r;

        complex (double a=1, double b=1, double z=10){
            x=a;
            b=y;
            r=z;
            cout << "The class is created succsessfully" << endl;
        }
        ~complex(){
            cout << "The class is destroyed succsessfully" << endl;
        }

        void set_values (){
            cin >> x;
            cin >> y;
        }

        double give_r(){
            r = sqrt(double (pow(x, 2)+ pow(y, 2)));
            return r;
        }

        complex operator+(complex c){
            complex cTemp;
            cTemp.x = this->x + c.x;
            cTemp.y = this->y + c.y;
            return cTemp;
        }

};

int main(){

    complex a, b, c;
    double a_r, b_r, c_r;
    cout << "Give values for a" << endl;
    a.set_values();
    cout << "Gibe values for b" << endl;
    b.set_values();
    c = a+b;
    a_r = a.give_r();
    b_r = b.give_r();
    c_r = c.give_r();
    cout << "The comlex number is: " << c.x << "+i"<< c.y << endl;
    cout << "The magnitude of a is: " << a_r << endl;
    cout << "The magnitude of b is: " << b_r << endl;
    cout << "The magnitude of c is: " << c_r << endl;
    return 0;
} 
