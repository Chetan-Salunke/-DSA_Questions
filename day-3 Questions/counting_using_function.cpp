#include <iostream>
using namespace std;

void count(int n){

    for (int i=1; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main ()
{
    int n;
    cout<<"enter the value : ";
    cin>>n;
    
    count(n);
    return 0;
}