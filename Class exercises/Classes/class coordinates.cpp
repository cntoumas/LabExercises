/* synolo antikeimenwn pou perigrafoun shmeia tou 3d xwrou 
4 methodoi 
3 thetoun sytetagmenes xwrista gia x,y,z
4h thetei kai tis 3 mazi
alles 3 methodei pou epistrefoun tis times twn syntetagmenwn
mia akoma methodo gia thn emfanish enos syntetagmenwn enws shmeiou
mia methodo pou tha dexetai dyo orismata 1o se poion aksona kanei metatopish, 2o thn metatopish (to deinoume san orisma)*/

#include <iostream>
using namespace std;

class coordinates{
	public: 
	float x, y, z, s;
	int i;
	void input_x(float a){
		x=a;
	}
	
	void input_y(float b){
		y=b;
	}
	
	void input_z(float c){
		z=c;
	}
	
	void input_xyz(float a, float b, float c){
		x=a;
		y=b;
		z=c;
	}
	
	void output_x(){
		cout << "The value of x is: " << x << endl;
	}
	
	void output_y(){
		cout << "The value of y is: " << y <<endl;
	}
	
	void output_z(){
		cout << "The value of z is: " << z <<endl;
	}
		
	void output_xyz(){
		cout << "The values of x,y,z is: " << "(" << x << ","<< y<< "," << z << ")"<<endl;
	}
	void move (int i, float s){
			if (i==1){
			x=x+s;
			}
			else if (i==2){
			y=y+s;
			}
			else {
			z=z+s;
			}
	}
};

int main(){
	coordinates obj;
	obj.input_x(0);
	obj.input_y(1);
	obj.input_z(2);
	obj.output_x();
	obj.output_y();
	obj.output_z();
	obj.input_xyz(0,1,2);
	obj.output_xyz();
	obj.move(1,4);
	obj.output_xyz();
	
	return 0;
}

