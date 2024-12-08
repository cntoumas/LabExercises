#include <iostream>
using namespace std;

struct complex
{
    float re;
    float im;
};

void input (complex comp_num[]){
    int i;
    for (i=0; i<2; i++){
        cout << "Insert number #" << i+1 << " for real part" << endl;
        cin >> comp_num[i].re;
    }
    for (i=0; i<2; i++){
        cout << "Insert number #" << i+1 << " for imaginary part" << endl;
        cin >> comp_num[i].im;
    }

}

void output (complex comp_num[]){
    int i;
    float sum_re=0, sum_im=0, sub_re=0, sub_im=0;
    for (i=0; i<2; i++){
    sum_re = sum_re + comp_num[i].re;
    sum_im = sum_im + comp_num[i].im;
    }
    for (i=0; i<2; i++){
        sub_re = comp_num[i].re - sub_re;
        sub_im = comp_num[i].im - sub_im;
    }
    cout << "The result of the addition is: " << endl << "Real part: "<< sum_re << endl << "Imaginary part: " << sum_im << endl;
    cout << "The result of the substrction is: " << endl << "Real part: " << sub_re << endl << "Imaginary part: " << sub_im << endl;
}

int main(){

    complex comp_num[2];
    input(comp_num);
    output(comp_num);

    return 0;
}