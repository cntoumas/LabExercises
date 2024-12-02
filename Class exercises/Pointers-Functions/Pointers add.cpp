#include <iostream>
using namespace std;

int  check (int x){
	int result;
	if (x%2==1){
		result = 2;
	}
	else {
		result = 1;
	}
	
	return result;
} 
void output (int result){
	if (result == 1){
		cout << "The number is even";
	}
	else {
		cout << "The number is odd";
		
	}
}
int main (){
	int x;
	int result; 
	cin >> x;
	result=check(x);
	output(result);
	return 0;
}
