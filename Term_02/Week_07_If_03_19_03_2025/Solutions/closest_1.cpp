#include<iostream>
#include<cmath> /// математическа библиотека
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;

    int ab = abs(b - a);
    int ac = abs(c - a);

    if(ab < ac)
    {
        cout<<"B is closer"<<endl;
    }
    else if(ab > ac)
    {
        cout<<"C is closer"<<endl;
    }
    else
    {
        cout<<"Equal"<<endl;
    }
    /// abs(num) -> модул на num
    /// sqrt(num) -> корен квадратен от num
    /// pow(num, power) -> num на степен power

    return 0;
}
