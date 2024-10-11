#include <iostream>

using namespace std;

int main(){

    int num, count=0;

    cout<<"Enter value : ";

    cin>>num;

    for(int i=2; i<num; i++){

        if(num % i==0){
            count++;
            break;
        }

    }
    if(count==0){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not prime number";
    }
}