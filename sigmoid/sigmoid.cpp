#include <iostream>
#include <math.h>

using namespace std;

long double sigm(float num)
{
	long double  ex = exp(num);
    	return (ex/(ex+1));
}

int main()
{
    	cout << "Enter a number: ";
    	float number;
    	cin >> number;
	if(number > 88)
    	{
        	cout << "Sigmoid val = 1" << endl;
        	return 0;
    	}
    	cout << "Sigmoid val = " << sigm(number) << endl;

    	return 0;
}
