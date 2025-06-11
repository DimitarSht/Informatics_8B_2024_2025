#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, br = 0;
    cin>>n;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            br++;
        }
    }
    if(br == 0)
    {
        cout<<"prosto";
    }
    else
    {
        cout<<"ne e prosto";
    }


    return 0;
}
