#include <iostream>

using namespace std;

int main()
{
	float numcursor = 1;
	double num, val=1;
	cout << "Enter the number for f(x) = e^x: ";
	cin >> num;

	for (int i=1; i<100000; i++)
	{
		numcursor *= num/i;
		val += numcursor;
	}

	cout << "Answer is: " << val << endl;

	return 0;
}
