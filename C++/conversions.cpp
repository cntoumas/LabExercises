#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
	int ctrl_num, conversion_ctrl, input_num, output_num;
	int binary[16], octal[16];
	string hex[16];
	int digit;
	int i,j;


start:
	cout << "Select the appropriate number for the desired number system:" << endl;
	cout << "Binary (1)" << endl;
	cout << "Octal (2)" << endl;
	cout << "Hexadecimal (3)" << endl;
	cin >> ctrl_num;
	cout << "Select the appropriate number for the type of conversion you want:" << endl;
	cout << "From decimal to other system (1)" << endl;
	cout << "From other system to decimal (2)" << endl;
	cin >> conversion_ctrl;
	switch (ctrl_num)
	{
	case 1:
	{
		cout << "Enter the input number in the correct number system: " << endl;
		cin >> input_num;
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
			goto finish;
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
			goto finish;
		}

	}
	case 2:
	{
		cout << "Enter the input number in the correct number system: " << endl;
		cin >> input_num;

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
			cout << "The octal number is : ";
			for (i=digit-1; i>=0; i--)
			{
				cout << octal[i];
			}
			goto finish;
		}

		else
		{
			output_num = 0;
			int base = 1;
			while (input_num)
			{
				int last_digit = input_num%8;
				input_num = input_num/8;
				output_num = output_num + last_digit*base;
				base = base*8;

			}


			cout << "The decimal number is:" << output_num << endl;

		}
		goto finish;
	}
	case 3:
	{
		if (conversion_ctrl == 1)
		{	cout << "Enter the input number in the correct number system: " << endl;
			cin >> input_num;
			while (input_num != 0)
			{
				int temp = 0;
				temp = input_num % 16;
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
			cout << "The hexadecimal number is : ";
			for (i=digit-1; i>=0; i--)
			{
				cout  << hex[i];
			}
			goto finish;
		}
		else
		{
			char hexNum[16];
			int length;
			output_num=0;
			cout << "Enter the input number in the correct number system: " << endl;
			cin >> hexNum;
			length = strlen(hexNum);
			for (i=length-1; i>=0; i--)
			{
				if (hexNum[i] >= '0' && hexNum[i] <= '9')
				{
					output_num = output_num + ((hexNum[i]-48)*pow(16,j));
					j++;
				}
				else if (hexNum[i] >= 'A' && hexNum[i] <= 'F')
				{
					output_num = output_num + ((hexNum[i]-55)*pow(16,j));
					j++;
				}
			}
			cout << "The decimal number is:" << output_num << endl;
			goto finish;
		}

	}
	default:
	{
		cout << "Invalid input";
		goto start;
	}
	}
finish:

	return 0;
}
