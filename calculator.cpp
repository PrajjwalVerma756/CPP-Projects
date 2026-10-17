#include <iostream>
using namespace std;

int main(){

    char op;
    double num1, num2;
    double result;

    cout << "************CALCULATOR************\n";

    cout << "Enter operation (+ - * /): ";
    cin >> op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    switch(op){
        case '+':
        result = num1 + num2;
        cout << "Result: " << result << '\n' ;
        break;
        
        case '-':
        result = num1 - num2;
        cout << "Result: " << result << '\n' ;
        break;

        case '*':
        result = num1 * num2;
        cout << "Result: " << result << '\n' ;
        break;
        
        case '/':
        result = num1/num2;
        cout << "Result: " << result << '\n' ;
        break;

        default:
        cout << "enter valid operation plz.\n";
        break;

    }

    cout << "***********************************";
    return 0;

}