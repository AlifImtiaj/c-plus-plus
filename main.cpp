#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
#include "doMath.h"

using namespace std;

int main()
{
    float first, second, result;
    cout<<endl<<"Enter 1st number : ";
    cin>>first;

    cout<<endl<<"Enter 2nd number : ";
    cin>>second;
    
    result = doMath(first, second);

    cout<<endl<<"Result is : "<<result<<endl<<"Press any key to exit : ";

    getch();
    return 0;

}
