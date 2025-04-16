#include<iostream>
using namespace std;
int main()
{
    int year;
    cin>>year;
    int ostatak = year % 4;

    switch(ostatak)
    {
    case 0:
        cout<<"Visokosna e!";
        break;
    default:
        cout<<"Ne e visokosna!";
        break; /// опционален
    }

    return 0;
}
