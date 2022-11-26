#include <iostream>
using namespace std;

int main()
{
    int number, r_number=0;
    cout << "Number: ";
    cin >> number;

    while (number != 0)
    {
        r_number = r_number*10; // multiply the r_number with 10
        int lastDigit = number%10; 
        r_number += lastDigit;
        number = number/10;

    }

    cout << "Reverse: " << r_number <<endl;
    
}