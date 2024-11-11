#include <iostream> 
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int ctrl_num, conversion_ctrl, input_num, output_num;
    int binary[16], octal[16];
    string hexnum, hex[16];
    int digit;
    int i,n;



    cout << "Select the appropriate number for the desired number system:" << endl;
    cout << "Binary (1)" << endl; 
    cout << "Octal (2)" << endl;
    cout << "Hexadecimal (3)" << endl;
    cin >> ctrl_num;
    cout << "Select the appropriate number for the type of conversion you want:" << endl;
    cout << "From decimal to other system (1)" << endl;
    cout << "From other system to decimal (2)" << endl;
    cin >> conversion_ctrl;
    cout << "Enter the input number in the correct number system: " << endl;
    cin >> input_num;
    switch (ctrl_num)
    {
        case 1:
        {
            if (conversion_ctrl == 1)
            {
                while (1)
                {       
	                if (input_num >= 1)
	                {
		                binary[digit] = input_num % 2;
		                input_num = (float) input_num/2;
		                digit++;
	                }
	                else
	                {
		                break;
	                }
                }
                cout << "The binary number is : ";
	            for (i=digit-1; i>=0; i--)
	            {               
		           cout << binary[i];
	            }
            }
            else
            {
                output_num = 0; 
                int base = 1; 
                while (input_num) 
                { 
                    int last_digit = input_num % 10; 
                    input_num = input_num / 10; 
                    output_num = output_num + last_digit * base; 
                    base = base * 2; 
                }  
                
        
                cout << "The decimal number is:" << output_num << endl;
            }





        }
        case 2:
        {
            if (conversion_ctrl == 1)
            {
                while (1)
                {       
	                if (input_num >= 1)
	                {
		                octal[digit] = input_num % 8;
		                input_num = (float) input_num/8;
		                digit++;
	                }
	                else
	                {
		                break;
	                }
                }
               
	            for (i=digit-1; i>=0; i--)
	            {               
		           cout << "The octal number is : " << octal[i];
	            }
            }
            else
            {
                output_num = 0; 
                int base = 1; 
                while (input_num) 
                { 
                    int last_digit = input_num % 8; 
                    input_num = input_num / 8; 
                    output_num = output_num + last_digit * base; 
                    base = base * 8; 
                }  
                
        
                cout << "The decimal number is:" << output_num << endl;
            }

        }
        case 3:
        {
            if (conversion_ctrl == 1)
            {
                while (input_num != 0)
                {       
                    int temp = 0;
                    temp = input_num % 16
	                if (temp < 10)
	                {
		                hex[digit] = temp + 48;
		                digit++;
	                }
	                else
	                {
		                hex[digit] = temp + 55;
		                digit++;
	                }
                    input_num = input_num / 16;
                }
               
	            for (i=digit-1; i>=0; i--)
	            {               
		           cout << "The hexadecimal number is : " << hex[i];
	            }
            }
            else
            {
                hexnum = to_string(input_num);
                output_num = 0; 
                int base = 0; 
                for (i = hexnum.size()-1; i>=0; i--)
                {
                    char hex_digit = hexnum[i];
                    int digit_val;
                    output_num = 0;
                    if (hex_digit >= '0' && hex_digit <= '9')
                    {
                        digit_val =hex_digit - '0';
                    }
                    else (hex_digit >= 'A' && hex_digit <= 'F')
                    {
                       digit_val = hex_digit - 'A' + 10;
                    }
                    
                    output_num = output_num + digit_val*pow(16, base)
                }
            
                cout << "The decimal number is:" << output_num << endl;
            }

        }
        default:
        {

        }
    }


    return 0;
}