#include <iostream>

using namespace std;

int main()
{
	long divident, divisor;
	char ch;
	do
	{
		cout << "Enter the dividend: ";
		cin >> divident;
		cout << "Enter the divisor: ";
		cin >> divisor;
    if (divisor == 0)
    {
      cout << "Invalid divisor!\n";
      continue;
    }
		cout << "The quotient is: " << divident / divisor;
		cout << ", the remainder is: " << divident % divisor;
		cout << "\nAgain? (y/n): ";
		cin >> ch;
	} while (ch != 'n');
	

	system("pause");
	return 0;
}
