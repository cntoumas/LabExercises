#include <iostream>
using namespace std;

int doub (int &x){ 

    x = x*2;
    return x;

}


int main (){

    int x;
    cout << "Insert a number for x." << endl;
    cin >> x;

    doub(x);

    cout << "The double value of x is: " << &x << endl;    


    return 0;
}