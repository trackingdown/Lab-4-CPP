//course: CS215-005
//Project: Lab Assignment4
//Date: 02/11/2015
//Purpose: To tell the user if their 8-digit credit card number's check digit is
//valid or invalid
//Author: Nicholas Pfister

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	cout << "Please enter the 8-digit credit card number: "; 
	int user_digit;
	cin >> user_digit;
	int sum1 = 0;
	int sum2 = 0;
	int check_digit = user_digit % 10;

	for (int i = 0; i < 8; i++)
	{
		//Changes the double of pow to an integer
		sum1 += ((user_digit / static_cast<int>(pow(10, i))) % 10);
    i++;
	//2 is what the odd digits need to be multiplied by in order to solve check digit
	int odd_digits = 2 * ((user_digit / static_cast<int>(pow(10, i))) % 10);
		odd_digits = (odd_digits % 10) + (odd_digits / 10);
		sum2 += odd_digits;
	}
	int total_sum = 0;
	total_sum = sum1+sum2;
	if (total_sum % 10 == 0) {
		cout << "Number is valid." << endl;
	}
	else {
		while (total_sum % 10 != 0) {
			check_digit += 1;
			total_sum += 1;
		}
		cout << "Number is invalid." << endl;
		cout << "Check digit should have been " << check_digit << endl;
 	}






	system("pause");
	return 0;
}
