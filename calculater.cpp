#include<iostream>
using namespace std;
int main()
{
    int a, b;
    char op;
    cout<<"CALCULATER...\n";
    cout<<"Enter a first number: ";
    cin>>a;
    cout<<"Enter a second number: ";
    cin>>b;
    cout<<"Enter operator(+, -, /, *): ";
    cin>>op;

    switch(op)
    {
        case '+':
        cout<<"sum is: "<<(a+b);
        break;

        case '-':
        cout<<"subtraction is: "<<(a-b);
        break;

        case '/':
        cout<<"divition is: "<<(a/b);
        break;

        case '%':
        cout<<"remainder is: "<<(a%b);
        break;

        case '*':
        cout<<"multiplication is: "<<(a*b);
        break;

        default:
        cout<<"invalide operator...";
    }
}