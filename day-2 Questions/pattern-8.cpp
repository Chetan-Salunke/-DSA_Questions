#include <iostream>
using namespace std;

int main ()
{
    int a = 4, b = 4;
    int count=1;
    
    for (int i=1; i<=a; i++){
        for (int j=1; j<=i; j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    return 0;
}           