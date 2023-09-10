#include <iostream>
using namespace std;

int ap(int n){

    return (3*n+7);
}

int main ()
{
    int n;
    cout<<"enter the value : ";
    cin>>n;

    int ans = ap(n);
    cout<<ans<<endl;
    return 0;
}