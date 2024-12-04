// mhkos kai platos orthogoniou se struct 

#include <iostream>
using namespace std;

struct rect{
	float x;
	float y;
};

void input (rect &value[2]){
	int i;
	for (i=0; i<2; i++){
		cout << "Insert value for x" << endl;
		cin >> value[i].x;
		cout << "Insert value for y" << endl;
		cin >> value[i].y;
		print(value);
	}
}

void print (rect &value){
	cout << "The values of x & y are: " << value[i].x << " & " << value[i].y << endl;
}

int main(){
	rect val[2];
	input(val);
	return 0;
}
