#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double A, B, C;

    cout<<"Enter A : ";
    cin>> A;

    cout<<"Enter B : ";
    cin>> B;

    /*

    A = pow(A , 2);
    B = pow(B , 2);
    C = sqrt(A + B);

    */

    C = sqrt(pow(A , 2) + pow(B , 2));


    cout << C;


}