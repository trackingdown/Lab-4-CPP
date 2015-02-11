#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int odd_digits = 0;
	cout << "Please enter the 8-digit credit card number: "; 
	int user_number;
	cin >> user_number;
	int sum1 = 0;
	int sum2 = 0;
	
	for (int i = 1; i <= 4; i++)
	{
		sum1 += user_number % 10;
		cout << sum1 << endl;
		cout << user_number % 10 << endl;
		user_number = user_number / 10;
		odd_digits = 2 * (user_number % 10);
		odd_digits = (odd_digits % 10) + (odd_digits / 10);
		sum2 += odd_digits;

		

		user_number = user_number / 10;
	}
	cout << user_number % 10 << endl;
	cout << sum2 << endl;
	cout << sum1 << endl;
	int total_sum = 0;
	total_sum = sum1+sum2;
	if (total_sum % 10 == 0) {
		cout << "Number is valid." << endl;
	}
	else {
		int check_digit = (user_number%10);
		while (total_sum % 10 != 0) {
			cout << check_digit << endl;
			check_digit += 1;
			cout << check_digit << endl;
			total_sum += 1;
			cout << total_sum << endl;
		}
		cout << "Number is invalid." << endl;
		cout << "Check digit should have been " << check_digit << endl;
 	}






	system("pause");
	return 0;
}
