#include<iostream>
using namespace std;
int main()
{
    int a = 3, b = 2;
//    cin>>a, b, c; /// Не е вярно!
//    cin>>a>>b>>c; /// Вярно е!
//    cout<<float(a) / double(b);

    if(a > b)
    {
        cout<<a<<endl;
    }
    else if(a == b)
    {
        cout<<"Ravni sa!"<<endl;
    }
    else
    {
        cout<<b;
    }

    return 0;
}
