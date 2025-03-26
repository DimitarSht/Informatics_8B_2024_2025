#include<iostream>
using namespace std;
int main()
{
    int liters, numOf2, numOf3;
    cin>>liters;

    numOf3 = liters / 5;
    numOf2 = numOf3;
    if(liters % 5 == 1)
    {
        numOf2--;
        numOf3++;
//        numOf3 += 1;
//        numOf3++;
    }
    else if(liters % 5 == 2)
    {
        numOf2++;
    }
    else if(liters % 5 == 3)
    {
        numOf3++;
    }
    else if(liters % 5 == 4)
    {
        numOf2 += 2;
    }

    cout<<numOf2<<" "<<numOf3;

    return 0;
}
