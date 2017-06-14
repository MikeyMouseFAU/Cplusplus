#include    <iostream>
#include    <iomanip>
#include    <vector>

using namespace std;

void Eratos(int length, vector< int > &);
ostream &operator <<(ostream &, const vector< int > &);
bool primeCheck(int);

int main()
{
	cout << "Sieve of Eratosthenes is a way of finding a prime numbers.\n"
		<< "Please select an upper range for which prime numbers will be displayed.\n"
		<< "Use integer that is >= 2 and <= 300\n"
		<< "Upper Limit: ";

	vector< int > primes;
	int size;
	cin >> size;

	if (size < 2 || size > 300)						//Validation input sequence
	{
		cerr << "Upper limit is invalid!!!  You did not use: (>= 2 and <= 300 ) \n";
		return 1;
	}

	Eratos(size, primes);

	cout << "vector contains:\n" << primes << '\n';
	cout << "\nThank you for everything. Bye Bye\n";

	return 0;
}

void Eratos(int length, vector< int > &primes)		//computes input
{

	for (int count = 2; count < length + 1; ++count)
	{
		primes.push_back(count);
	}

	for (unsigned int i = 0; i < primes.size(); ++i)

	if (primeCheck(primes[i]) == 1)
	{
		primes.erase(primes.begin() + i);
		--i;
	}
}

bool primeCheck(int pNum)				//checks for multiples of the number
{
	for (int num = 2; num < pNum;)
	{
		if (pNum%num == 0)
		{
			return 1;
		}
		++num;
	}
	return 0;
}


ostream &operator <<(ostream &out, const vector< int > &primes)
{
	int newLine = 0;
	for (unsigned int i = 0; i < primes.size(); ++i)
	{
		out << setw(5) << primes[i];
		if (++newLine % 10 == 0)					//New line loop
		{
			out << "\n";
		}
	}
	return out;
}



