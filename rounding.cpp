#include <iostream> 
using namespace std;

int main ()
{
float input_num;
float shifted_num;
float int_part;
float frac_part;

do {
    cout << "Select a real number in the [0,10) range:";
    cin >> input_num;
if (input_num >= 0 && input_num < 10)
{
    shifted_num = input_num*10;
    int_part = (int) shifted_num;
    frac_part = shifted_num - int_part;
    if (frac_part >= 0.5)
    {
        int_part=int_part+1;
        int_part=int_part/10;
        cout << int_part;
    }
    else
        cout <<  int_part/10;
}
else
    cout << "Invalid Input" << '\n';
} while (input_num < 0 || input_num >=10);

    return 0;
}