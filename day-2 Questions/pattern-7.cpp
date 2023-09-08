#include <iostream>
using namespace std;

int main ()
{
    int a = 5, b = 5;
    
    for (int i=1; i<=a; i++){
        for (int j=1; j<=b; j++){
            
            if (j<a-i+1){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}