#include <iostream>

using namespace std;

int main(){

    char op;
    double num1;
    double num2;
    double result;

    cout<<"~~~~~~~~~~~~~~~~CALCULATOR~~~~~~~~~~~~~~~~" << "\n";
    cout<<"Enter (+, -, *, /) : ";

    cin>> op;

    cout<<"Enter Number 1 : ";
    cin>> num1;

    cout<<"Enter Number 2 : ";
    cin>> num2;

    switch (op){
        
        case '+' :
        result = num1 + num2;
        cout<< "Result : " << result << "\n";
        break;

        case '-' :
        result = num1 - num2;
        cout<< "Result : " << result << "\n";
        break;

        case '*' :
        result = num1 * num2;
        cout<< "Result : " << result << "\n";
        break;

        case '/' :
        result = num1 / num2;
        cout<< "Result : " << result << "\n";
        break;

        default :
        cout<<"Enter valid number and try again" << "\n";

    }

    cout<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";


}