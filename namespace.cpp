#include <iostream>

using namespace std;

namespace first{

    int x = 1;
    
}

namespace second{

    int x = 2;
}

int main(){
    
    using namespace second;
    
    int p = 4;

    cout<< p * first ::  x * second :: x;

}