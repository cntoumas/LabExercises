// Exw 2 pinakes kai vriskw thn tomh tous
#include <iostream>
using namespace std; 

int main (){
	int A[]={3, 6, 9, 12, 15, 18};
	int B[]={0, -2, 6, 1, 2, 2, 15};
	int i, j;

	for (i=0; i<6; i++){
	for (j=0; j<7; j++){
	if (A[i] == B[j]){
		cout << "The common value of the two arrays is: " << A[i] <<endl;
	}
}
}
	return 0;
}
