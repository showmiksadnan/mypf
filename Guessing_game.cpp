#include <iostream>

using namespace std;

int main()
{
    int hostUserNum, guestUserNum;

    cout << "Host: " << endl;
    cin >> hostUserNum;
    system("cls");
    cout << "Guest: " << endl;
    cin >> guestUserNum;


    /*if (hostUserNum==guestUserNum)
         cout << "Congrates you guessed the correct number" << endl;

     else 
         cout << "Sorry you guessed the WRONG number" << endl; */

    (hostUserNum==guestUserNum)? cout << "Congrates you guessed the correct number" << endl: cout << "Sorry you guessed the WRONG number" << endl;


   
}