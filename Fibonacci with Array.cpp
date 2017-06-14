
#include    <iostream>
#include    <iomanip>
using namespace std;

void Fibonacci(int *, int length);

int main()
{
	cout << "How many numbers in the Fibonacci Series? (Use values >= 2 and <= 20) ";

	int size;
	cin >> size;

	if (size < 2 || size > 20)						//Validation input sequence
	{
		cerr << "Lenght is out of bounds!!!  ( >= 2 and <= 20 )\n";
		return 1;
	}

	int *arrayptr = new int[size];							//array size allocation

	Fibonacci(arrayptr, size);

	delete[] arrayptr;										//array size deallocation

	cout << "\nThank you for everything. Bye Bye\n";

	return 0;
}

void Fibonacci(int * a, int size)
{
	int num, nextNum;
	int num1 = 0;
	int num2 = 1;
	int newLine = 0;
		
	for (int count = 0; count < size; ++count)		//Fibinacci term computation loop
	{
		if (count <= 1)
		{
			nextNum = count;
			a[count] = nextNum;
		}
		else
		{
			nextNum = num1 + num2;
			num1 = num2;
			num2 = nextNum;
			a[count] = nextNum;
		}
	}	
	for (int count = size - 1 ; count >= 0; --count)		
	{
		cout << setw(5) << a[count];

		if (++newLine % 6 == 0)					//New line loop
		{
			cout << "\n";
		}
	}
}



