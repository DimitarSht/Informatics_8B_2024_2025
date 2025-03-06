#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;

//    if(a > b && b > c)
//    {
//        cout<<a;
//    }
//    else if(a > b && a < c)
//    {
//        cout<<c;
//    }
//    else if(a < b && b < c)
//    {
//        cout<<c;
//    }
//    else if(a < b && a > c)
//    {
//        cout<<b;
//    }
//    else if(a < c && b > c)
//    {
//        cout<<b;
//    }
//    else if(a > c && b < a)
//    {
//        cout<<a;
//    }

    if(a > b)
    {
        if(b > c)
        {
            cout<<a;
        }
        else if(a < c)
        {
            cout<<c;
        }
    }
    else if(a < b)
    {
        if(b < c)
        {
            cout<<c;
        }
        else if(a > c)
        {
            cout<<b;
        }
    }
    else if(a > c)
    {
        if(b > a)
        {
            cout<<b;
        }
        else if(b < a)
        {
            cout<<a;
        }
    }
return 0;
}
