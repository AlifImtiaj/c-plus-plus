#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float first, second, result;
    cout<<"Enter first number : ";
    cin>>first;
    cout<<endl<<"Enter second number : ";
    cin>>second;
    result = first + second;
    cout<<endl<<"Sum of "<<first<<" and "<<second<<" is "<<result;
    getch();
    return 0;
}
