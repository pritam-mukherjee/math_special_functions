#include <iostream>

using namespace std;

/*
* FIBONACCI SERIES CAN BE DERIVED BY THREE METHODS:
* 1) Simple nth term = n-1th term + n-2th term
* 2) Recursion with or without using dynamic programming
* 3) Using Eigenvalue of golden ratio as a common ratio multiplied to each term and rounded up to get the next term
*
* This example will use 1st method but later 2nd and 3rd methods will be added
*/

int main()
{
    cout << "Enter how many numbers down in the series: ";
    int n; // Number of terms to be printed
    cin >> n;

    long a = 1, b = 1, c;
    // Starting off
    cout << a << endl << b << endl;
    for(int i=0; i<(n-2); i++)
    {
        //Will now create the series
        c = a + b;
        a = b;
        b = c;
        cout << b << endl;
    }

    cout << "Ratio of last consecutive terms: " << (double(b)/double(a)) << endl; 

    // The process should have time complexity of O(n)

    return 0;
}

// Usable upto n = 92 for length constrainsts of long type

/*
Sample input n = 10
Output:
1
1
2
3
5
8
13
21
34
55
Ratio of last consecutive terms: 1.61765

The ratio will tend to its limiting eigenvalue which is the golden ratio = 1.61803
*/