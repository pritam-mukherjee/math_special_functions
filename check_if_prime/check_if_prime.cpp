#include <iostream>

using namespace std;

/*
* All Prime numbers can be broken into either of:
* (6n + 1) or (6n + 5)
* All other numbers which cannot broken like this is consecutive
* Exceptions: 2, 3
*
* So after checking if number is 2 or 3, we can divide the number by 6 and get the remainder
* If remainder = 1 or 5, then is prime
*
* ONLY INTEGERS CAN BE CHECKED
*/

int main()
{
    long number; // Should the user decides he wants to enter a big number

    cout << "Enter the value to be checked: ";

    // Check if the user provides correct input type : integer
    try
    {
        cin >> number;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        cout << "Enter Valid integer!" << endl;
        return 0;
    }
    

    if(number == 2 || number == 3)
    {
        cout << "Prime!" << endl;
    }
    else
    {
        if(number % 6 == 1 || number % 6 == 5)
        {
            cout << "Prime!" << endl;
        }
        else
        {
            cout << "Not Prime" << endl;
        }
        
    }
    

    return 0;
}