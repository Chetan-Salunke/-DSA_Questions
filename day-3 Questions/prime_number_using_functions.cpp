#include <iostream>
using namespace std;

// 1 primeNumber
// 0 nonPrimeNumber

bool is_prime(int n){

    for (int i=2; i<n; i++){
        if (n%i ==0){
            return 0;
        }
    }
    return 1;
}

int main ()
{
    int n;
    cout<<"enter the value : ";
    cin>>n;

    if (is_prime(n)){
        cout<<"prime number"<<endl;
    }else{
        cout<<"non prime number"<<endl;
    }
    return 0;
}