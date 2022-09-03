#include <iostream>
using namespace std;

//count digits of a number


int main()
{
    int number;
    cout << "Number:";
    cin >> number;

    if(number == 0)
    cout << "You have entered 0" << endl;
    
    else{
        
        if(number<0)
            number = -1 * number; // if the number is negative
        int counter = 0;
        while (number > 0)
        {
           //number = number/10;
           number /= 10;
           counter ++;//increase the value of the counter
        }

    cout << "Number Contains " << counter << " digits." << endl;
        
    }
}