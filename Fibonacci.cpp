#include    <iostream>
#include    <iomanip>

using namespace std;

int main()
{


	int num, count, nextNum;
	int num1 = 0;
	int num2 = 1;
	int newLine = 0;
	do
	{
		cout << "\n\nHello, this program displays Fibonacci series.\n";
		cout << "Please type a number of terms you would like to see from Fibonacci series: ";
		cin >> num;

		for (count = 0; count < num; ++count)			//Fibinacci term computation loop
		{
			if (count <= 1)
			{
				nextNum = count;
			}
			else
			{
				nextNum = num1 + num2;
				num1 = num2;
				num2 = nextNum;
			}

			cout << setw(5) << nextNum;	//last variable print after 

			if (++newLine % 6 == 0)					//New line loop
			{
				cout << "\n";
			}
		}
	} while (num > 0);
	cout << "\nThank you for everything. Bye Bye\n";

	return 0;
}