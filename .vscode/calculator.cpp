#include <iostream>
using namespace std;


int main()
{
    float num1, num2;
    char operation;
    cout << "*****Welcome to Smart Calculator*****" << endl;

    cin >> num1 >> operation >> num2;

    switch (operation)
    {
        case '-': cout <<num1<<operation<<num2<<"="<< num1-num2;
        break;

        case '+': cout <<num1<<operation<<num2<<"="<< num1+num2;
        break;

        case '*': cout <<num1<<operation<<num2<<"="<< num1*num2;
        break;

        case '/': cout <<num1<<operation<<num2<<"="<< num1/num2;
        break;

        //case '%': cout <<num1<<operation<<num2<<"="<< num1 % num2;
        //break;
        case '%':
        bool isNum1Int, isNum2Int;
        isNum1Int = ((int)num1 == num1);// if it is 5.6 then it will take only 5.0; so 5.6==5.0
        isNum2Int = ((int)num2 == num2);

        if(isNum1Int==isNum2Int)
        cout <<num1<<operation<<num2<<"="<< (int)num1 % (int)num2;
        else
        cout <<"Not Valid" <<endl;
        break;


       
        default:cout << "Not Valid Operation" <<endl;
    
    }
    

}