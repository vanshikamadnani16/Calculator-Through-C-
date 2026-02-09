#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter first number: ";
    int num1;
    cin>>num1;
    cout<<"Enter second number: ";
    int num2;
    cin>>num2;
    cout<<"Enter operator (+, -, *, /, %): ";
    char op;
    cin>>op;

    switch(op)
    {
        case '+':
            cout<<"Result: "<<num1+num2;
            break;
        case '-':
            cout<<"Result: "<<num1-num2;
            break;
        case '*':
            cout<<"Result: "<<num1*num2;
            break;
        case '/':
            if(num2!=0)
                cout<<"Result: "<<num1/num2;
            else
                cout<<"Error: Division by zero!";
            break;
        case '%':
            if(num2!=0)               
             cout<<"Result: "<<num1%num2;
            else
                cout<<"Error: Division by zero!";
            break;
        default:
            cout<<"Invalid operator!";
    }
}