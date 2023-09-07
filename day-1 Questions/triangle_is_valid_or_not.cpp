#include <iostream>
using namespace std;

int main ()
{
    int a = 7, b = 10, c = 5;
    if (a+b>c && b+c>a && c+a>b){
        cout<<"the triangle is valid"<<" ";
    }else{
        cout<<"triangle is not valid"<<" ";
    }
    return 0;
}