#include <iostream>

using namespace std;

int main()
{
    // Users enters side length of a traingle (a,b,c)
    //program should write out wheter that traingle is equilateral, isosceles or scalene

    float a,b,c;
    cout << "Enter the side length of the triangle:" << endl;
    cin >> a >> b >> c;

    if (a == b && b ==c)
    {
        cout << "The triangle is equileral"<<endl;
    }
    else
    {
        if (a != b && b!=c && b!=c)
        {
          cout << "The triangle is scalene"<<endl;  
        }

        else
        {
            cout << "The triangle is isosceles"<<endl;
        }

    }
    cout << "Thanks a lot......"<< endl;



}