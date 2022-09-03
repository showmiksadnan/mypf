#include <iostream>
using namespace std;

int main()
{
    int year, month;
    cout << "Plase Enter the Year:" <<endl;
    cin >> year;
    cout << "Plase Enter the Month:" <<endl;
    cin >> month;

    switch (month)
    {
        case 2: (year%4 ==0 && year%100 != 0 || year%400 == 0)?
            cout << "29 Days Month": cout << "28 Days Month" << endl;
            break;

        case 4:
        case 6:
        case 9:
        case 11: cout << "30 Days Month" << endl;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: cout << "31 Days Month" << endl;
            break;

        default: cout << "Not Valid" << endl;
    }


}