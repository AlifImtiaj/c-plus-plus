#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    char select;
    float first, second, result;

    cout<<"For + press \"+\"\n for - press\"-\"\n for * press \"*\"\n for / press \"/\" : ";
    cin>>select;

    cout<<"Enter 1st number : ";
    cin>>first;

    cout<<endl<<"Enter 2nd number : ";
    cin>>second;

    switch(select)
    {
        case '+':
            result = first + second;
            break;

        case '-': 
            result = first - second;
            break;

        case '*': 
            result = first * second;
            break;

        case '/':
            result = first / second;
            break;

        default:
            cout<<endl<<"Wrong Input.\a\n";
            break;
    }

    cout<<endl<<"Result is : "<<result;
    
    getch();
    return 0;

}
