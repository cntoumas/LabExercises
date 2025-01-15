#include <iostream>
using namespace std;

int main (){ 
	
	double *p;
	p = new double[2];
	
	cout << "dwse input: ";
	cin >> *p;
	cout << "sth dieuthinsh " << p << " exei ton arithmo " << *p << endl;
	cin >> *(p+1);
	cout << "sth dieuthinsh " << p+1 << " exei ton arithmo " << *(p+1) << endl;
	
	delete p;
	
	cout << "sth dieuthinsh " << p << " exei ton arithmo " << *p << endl;
return 0;
}
