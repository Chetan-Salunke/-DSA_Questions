#include <iostream>
using namespace std;

void fibo(int n)
{
    int a = 0;
    int b = 1;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        cout << sum << endl;
    }
}

int main()
{
    int n;
    cout << "enter the value : ";
    cin >> n;

    fibo(n);
    return 0;
}