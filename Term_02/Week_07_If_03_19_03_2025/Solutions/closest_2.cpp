#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int xA, yA, xB, yB, xC, yC;

    cin>>xA>>yA>>xB>>yB>>xC>>yC;

    double AC = sqrt((xA - xC)*(xA - xC) + yC*yC);
//                    pow(xA - xC, 2)
    double AB = sqrt((xA - xB)*(xA - xB) + yB*yB);

    if(AC < AB)
    {
        cout<<"C is closer"<<endl;
    }
    else if(AC > AB)
    {
        cout<<"B is closer"<<endl;
    }
    else
    {
        cout<<"Equal"<<endl;
    }

    return 0;
}
