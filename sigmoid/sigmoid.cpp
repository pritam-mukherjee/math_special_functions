#include <iostream>
#include <math.h>

using namespace std;

_Float64x sigm(float num)
{
    _Float64 ex = exp(num);
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