#include <iostream>
using namespace std;

int main ()
{
    int a = 7;
    bool isprime = true;
    for (int i=2; i<a; i++){
        if (a%i == 0){
            cout<<"the given number is not prime"<<" ";
            isprime = false;
            break;
        }
    }
    if (isprime){
        cout<<"the given number is prime "<<" ";
    }
    return 0;
}