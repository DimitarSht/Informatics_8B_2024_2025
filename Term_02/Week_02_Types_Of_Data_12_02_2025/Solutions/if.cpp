#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    if(a > b || a == b)///(a >= b)
    {
        cout<<a<<endl;
    }
    else if(a < b)
    {
        cout<<b<<endl;
    }
    else
    {
        cout<<"ravni sa!"<<endl;
    }



    return 0;
}

