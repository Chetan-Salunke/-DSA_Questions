#include <iostream>
using namespace std;

float circum(int r){
    float pi = 3.14;
    float c = 2 * pi * r;
    return c;
}

int main ()
{
    int r;
    cout<<"enter the value of r : ";
    cin>>r;

    float ans = circum(r);
    cout<<ans;  
    return 0;
}