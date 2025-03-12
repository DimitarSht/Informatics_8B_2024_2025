#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;

    if (a!=b){
        a=a+b;
        b = a;
    }
    else {
        a=0;
        b=0;
    }
    cout<<a<<endl<<b;
//    cin>>a;
//    cin>>b;



//    if(<условие 1>)
//    {
//        <код, ако условие 1 е вярно>
//    }
//    else if(<условие 2>)
//    {
//        <код, ако условие 2 е вярно, но
//        условие 1 НЕ е вярно>
//    }
//    else
//    {
//        <код, ако условия 1 и 2 НЕ са верни>
//    }
    return 0;
}
