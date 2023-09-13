#include <iostream>
using namespace std;

bool is_even(int n){
    return ((n/2)*2 == n);
}

int main ()
{
    int n;
    cout<<"enter the value : ";
    cin>>n;

    is_even(n) ? cout<<"Even number" : cout<<"Odd number";
    return 0;
}