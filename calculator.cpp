#include<bits/stdc++.h>
using namespace std;
int main(){
    double num1, num2;
    char operation;

    
    cout << "Enter the first number: ";
    cin >> num1;

    
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    
    cout << "Enter the second number: ";
    cin >> num2;

    
    switch (operation) {
        case '+':
            std::cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            std::cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            std::cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is undefined." <<endl;
            }
            break;
        default:
            cout << "Error: Invalid operation selected." << endl;
            break;
    }

    return 0;

}