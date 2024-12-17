#include <iostream>
using namespace std; 
#define PI 3.1415

class circle
{
private:
    double aktina;
public:
    double set_aktina (){
        double radius;
        do {
            cout << "Dwse timi gia thn aktina tou kyklou" << endl;
            cin >> aktina;
        } while (radius < 0);
    }

    double give_embadon () {
        return PI*aktina*aktina;
    }
};

int main (){
    circle kyklos;
    double radius, emvadon;

    radius = kyklos.set_aktina();
    emvadon = kyklos.give_embadon();
    
    cout << "To emvadon tou kyklou me aktina " << radius << " einai " << emvadon << endl;
    return 0;
}

