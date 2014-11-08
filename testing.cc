#include <iostream>

using namespace std;
//mod10 calculator
bool calculate(int num);
int main
{
	int testcode;// holds number being tested
	bool result; //holds result of checksum test
	testcode = 0;//initialize testcode
	cin >> testcode;//priming read
	while (cin)
	{
		result = calculate(testcode);
		if (result)//since result is a bool, no comparison needed
			cout << "Test Positive, Valid Number."
		else
			cout << "Test Negative, Invalid Number."
		cin >> testcode;//recurring read
	}
	return 0;
}
//selftests test code
bool calculate(int num);
{
	int code = 0;//this is the number being tested against
	int sum = 0; //final sum against which code is tested
	int temp = 0;//temporary holding place for calculation purposes
	code = num %10;//last digit is the 'code', pulled with mod 10
	num /=10;   //removes the 'code' from the test number
	while (num >0)//repeat loop until you run out of digits
	{
		temp = num %10;//take the last digit
		temp *=2;      //multiply it by 2
		num /= 10;     //remove it from the number
		sum += (num %10) + (temp % 10) + (temp / 10);
		//calculates a new sum based on the three potential digits
		//that need to be added together
		num /=10;//remove the non multiplying number from remaining num
	}
	sum = 10 - sum%10 //calculate final sum number
	if (sum == code)//final calculated sum should match the initial code
		return true;
	else
		return false;
}
//this loop functions based on interger division semantics.
//since int/int division truncates 0's, you can use that feature
//to delete the last digit from a number.  additionally, %10 for a base 10
//number is always equal to the last digit, so you can use %10 to pull the
//last digit off of a number, then /10 to remove it from the number
