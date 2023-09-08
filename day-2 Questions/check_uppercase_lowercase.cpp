#include <iostream>
using namespace std;

int main ()
{
    char a;
    cout<<"enter the char : ";
    cin>>a;

    if(isupper(a)){
        cout<<"char is uppercase"<<" ";
    }else if (islower(a)){
        cout<<"char is lowercase"<<" ";
    }else{
        cout<<"numeric value"<<" ";
    }
    return 0;
}