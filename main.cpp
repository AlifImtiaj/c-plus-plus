#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>

using namespace std;
float doCalculation(char option, float firstNumber, float secondNumber)
{
    float result;
    switch(option)
    {
        case '+':
            result = firstNumber + secondNumber;
            break;

        case '-': 
            result = firstNumber - secondNumber;
            break;

        case '*': 
            result = firstNumber * secondNumber;
            break;

        case '/':
            result = firstNumber / secondNumber;
            break;

        default:
            cout<<endl<<"Wrong Input.\a\n";
            break;
    }
    cout<<endl<<"Doing the calculation";
    Sleep(1000);
    cout<<" . ";
    Sleep(1000);
    cout<<" . ";
    Sleep(1000);
    cout<<" . ";
    return result;
}

int main()
{
    char select;
    float first, second, result;

    cout<<"For + press \"+\"\n for - press\"-\"\n for * press \"*\"\n for / press \"/\" : ";
    cin>>select;

    cout<<endl<<"Enter 1st number : ";
    cin>>first;

    cout<<endl<<"Enter 2nd number : ";
    cin>>second;

    result = doCalculation(select, first, second);

    cout<<endl<<"Result is : "<<result<<endl<<"Press any key to exit : ";

    getch();
    return 0;

}
