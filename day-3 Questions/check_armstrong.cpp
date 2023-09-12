#include <iostream>
using namespace std;

int  isArmstrong(int n){
    int original = n;
    int sum = 0;

    while (n>0)
    {
        int rem = n%10;
        n = n/10;
        sum = sum + rem*rem*rem;
    }
    return sum == original;
    
}

int main ()
{
    int n;
    cout<<"enter the value : ";
    cin>>n;

    return 0;
}