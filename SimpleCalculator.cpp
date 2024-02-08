#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    double a,b,r;
    char op;
    cout<<"Simple Calculator"<<endl;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Choose (+, -, *, /): ";
    cin>>op;
    switch(op) {
        case '+':
            r= a+b;
            cout<<"Result: "<<r<<endl;
            break;
        case '-':
            r=a-b;
            cout<< "Result: "<<r<<endl;
            break;
        case '*':
            r=a*b;
            cout<<"Result:"<<r<<endl;
            break;
        case '/':
            if (b != 0) {
                r=a / b;
                cout<<"Result: " << r << endl;
            } else {
                cout<<"Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout<< "Invalid operation. Please choose +, -, *, or /." << endl;
    }
    return 0;
}