#include <iostream>

using namespace std;

int main()
{
   float weight;
   float height;
   cout << "Enter you weight in kilo: " << endl;
   cin >> weight;
   cout << "Enter you height in meter: " << endl;
   cin >> height;

   float bmi = weight/(height * height);
   cout << "Your BMI is: " << bmi <<endl;

   if(bmi<18.5)
   {
       cout << "You are Underweight" << endl;
   }
   else
   {
       if (bmi>25)
       {
           cout << "You are Overweight" << endl;
       }
       else
       {
           cout << "You are Normal Weight" << endl;
       }

   }
   


}