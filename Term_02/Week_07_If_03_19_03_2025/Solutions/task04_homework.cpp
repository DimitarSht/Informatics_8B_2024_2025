#include<iostream>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;

    if(a < b && b < c)
    {
        a = a * 2;
        b *= 2; /// съкратен запис
        c = c * 2;
    }
    else
    {
        a *= (-1);
        b = b * (-1);
        c = c * (-1);
    }

    cout<<a<<" "<<b<<" "<<c<<endl;

    return 0;
}
