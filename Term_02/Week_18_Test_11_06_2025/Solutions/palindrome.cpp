#include<iostream>
using namespace std;
int main()
{
    int n, oldN, br, revN = 0;
    cin>>n;
    oldN = n;
    for(br = 0; n != 0; br++)
    {
        n /= 10;
    }
    n = oldN;
    for(int i = br; i != 0; i--)
    {
        revN = revN * 10 + oldN % 10;
        oldN /= 10;
    }
    if(n == revN)
    {
        cout<<"palindrom";
    }
    else
    {
        cout<<"ne e palindrom";
    }


    return 0;
}
