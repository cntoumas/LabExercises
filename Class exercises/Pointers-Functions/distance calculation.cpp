#include <iostream>
using namespace std;

float increase (float t){
	float nextt;
	nextt = t + 0.1;
	return nextt;
}

float multiply (float u, float t){

	return u*t;
}

float readme(){
	float u;
	cin >> u;
	return u;
}

void print (float s){
	cout << "The distance is: " << s << endl;
}

void message(){
	cout << "Welcome to the distance calulating programm" << endl;
	cout << "Please enter the desired velocity! ";
}


int main (){
	message();
	float s, u, t=1;
	int i;
	
	u = readme();
	for (i; i<=90+1; i++){
		s = multiply(u,t);
		print(s);
		t = increase (t);	
	}

	return 0;
}
