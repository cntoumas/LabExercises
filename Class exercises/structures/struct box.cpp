/*
kanw mia class me onoma box. Vazw diastaseis san public metavlhtes platos mhkos ypsos (float) kai kanw mia
public idiothta me onoma volume pou tha ypoligizei ton ogko tou koutiou kai mia idiotht typwse pou tha
typwnei ton ogko.
*/

#include <iostream>
using namespace std; 

class box {
	public: 
		float height, width, length, volume;
		
		float calculate () {
			volume = height*width*length;
		}
		
		void print (){
			cout << "The volume is: " << volume << endl;
		}
		
	
};

class circle :public box{
	public: 
	
		void print2(){
			cout << "Tyxaio mhnyma" << endl;
		} 
};


class klash :public circle{
	
};

int main (){
	
	box square; 
	klash output;
	
	square.height=5;
	square.length=5;
	square.width=5;
	square.calculate();
	square.print();
	
	output.print2();
	
	return 0;
}
