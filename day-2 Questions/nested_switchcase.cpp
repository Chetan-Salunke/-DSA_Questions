#include <iostream>
using namespace std;

int main ()
{
    int a = 1, b = 2;

    switch(a){
        case 1 : switch(b){
            case 1 : cout<<"a and b is same";
            break;
            case 2 : cout<<"a is 1 and b is 2";
            break;
            case 3 : cout<<"a is 1 and b is 3";
            break;
        }
        case 2 : switch(b){
            case 4 : cout<<"a is 2 and b is 4";
            break;
            case 5 : cout<<"a is 2 and b is 5";
            break;
            case 6 : cout<<"a is 2 and b is 6";
            break;
        }
    }

    switch(a){

    }
    return 0;
}