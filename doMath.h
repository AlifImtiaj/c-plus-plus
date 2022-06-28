#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>

using namespace std;
float doMath(float firstNumber, float secondNumber)
{
    char option;
    cout<<"For + press \"+\"\n for - press\"-\"\n for * press \"*\"\n for / press \"/\" : ";
    cin>>option;

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
    return result;
}
