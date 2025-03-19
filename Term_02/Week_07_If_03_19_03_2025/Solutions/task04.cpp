#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;

    int newNum1 = num/1000*10 + num % 10;
    int newNum2 = num/100%10*10 + num/10%10;

    if(newNum1 < newNum2)
    {
        cout<<"new num 2 is bigger";
    }
    else if(newNum1 > newNum2)
    {
        cout<<"new num 1 is bigger";
    }
    else
    {
        cout<<"equal";
    }


    return 0;
}
