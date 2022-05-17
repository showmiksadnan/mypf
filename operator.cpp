#include <iostream>

using namespace std;

int main()
{
   //binary operators: +.-.*./,%

   cout << 5+2 <<endl;
   cout << 5/2.0 <<endl;
   cout << 5%2 <<endl;

   //unary operator
   // ++,--

   int counter = 7;
   counter++;
   cout << counter <<endl;

   int counter2 = 7;
   cout << counter2++ <<endl;//post-increment
   cout << ++counter2 <<endl;//pre-increment

   //decrement has the same structure......
   //Relational operators
   // <,>,<=,>=,!=,==

   int a = 5;
   int b = 5;

   cout <<(a==b) <<endl;;

   //logical operatior: &&,||,!

   cout << (a==5 && b!=5) <<endl;

   //assignment operators: =,+=,-+,*=,/=,%=

   int x = 5;
   x += 7;
   x = x + 7; //same as the previous line(line 41)
   


}