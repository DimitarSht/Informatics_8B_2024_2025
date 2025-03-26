#include<iostream>
using namespace std;
int main()
{
    int a, b, product, lastDigit;
    cin>>a>>b;
    product = a * b;
    lastDigit = product % 10;

    if(lastDigit % 2 == 0)
    {
        cout<<"even "<<lastDigit;
    }
    else
    {
        cout<<"odd "<<lastDigit;
    }




    return 0;
}
