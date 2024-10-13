#include <iostream>
#include <vector>

using namespace std;

typedef string text_t;
typedef int num;
typedef double doub;



using string_u = string;
using page = int;

int main(){

    text_t name = "Marup Hossain";
    num dig = 8;
    const doub pie = 3.1416;

    string_u name2 = "Abu Sayed";
    page pg = 12;

    cout<<  name << '\n' << dig << '\n' << name2 << '\n' << pie << '\n' << pg;


}