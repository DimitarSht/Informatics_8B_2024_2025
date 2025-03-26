#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;

    int a = num / 100;
    int b = num / 10 % 10;
    int c = num % 10;

    if(a != 0 && b != 0 && c != 0)
    {
        if(num % a == 0 && num % b == 0 && num % c == 0)
        {
            cout<<"yes";
        }
        else
        {
            cout<<"no";
        }
    }
    else
    {
        cout<<"vavedi novo chislo";
    }





    return 0;
}
