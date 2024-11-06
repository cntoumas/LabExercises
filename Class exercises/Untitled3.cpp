#include <iostream> 
using namespace std;

#include <iostream> 
using namespace std;

int main ()
{
    float input_num;
    float shifted_num;
    float int_part;
    float frac_part;
    
    
    do {
        cout << "Select real number in the [0,10) range: ";
        cin >> input_num;
        
        switch ( (int) input_num*100)
        {
        case 0 ... 999:
            shifted_num = input_num*10;
            int_part = (int) shifted_num;
            frac_part = shifted_num - int_part;
            frac_part = frac_part*10;
            switch ( (int) frac_part)
            {
            case 0 ... 4:
                cout << int_part/10;
                break;
            
            default:
                int_part++;
                cout << int_part/10;
                break;
            }
            break;
        default:
            cout << "Invalid Input" << '\n';
            break;
        }

    } while (input_num < 0 || input_num >=10);
 
    return 0;
}
