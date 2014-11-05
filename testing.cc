#include <iostream>

using namespace std;
//mod10 calculator
int calculate(int num);
int main
{
	int testcode;
	testcode = 0;
	cin >> testcode;
	while (cin)
	{
		calculate(testcode);
		cin >> testcode;
	}
	return 0;
}
//selftests test code
int calculate(int num);
{
	int code = 0;
	int sum = 0;
	int temp = 0;
	code = num %10;
	num /=10;
	while (num >0)
	{
		temp = num %10;
		temp *=2;
		num /= 10;
		sum += (num %10) + (temp % 10) + (temp / 10);
		num /=10;
	}
}

