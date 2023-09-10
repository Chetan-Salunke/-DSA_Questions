#include <iostream>
using namespace std;

int is_even(){
    
    int a;
    cout<<"enter the value : ";
    cin>>a;

    if (a&1){
        cout<<"odd number"<<endl;
    }else{
        cout<<"even number"<<endl;
    }
}

int main ()
{
    is_even();
    return 0;
}