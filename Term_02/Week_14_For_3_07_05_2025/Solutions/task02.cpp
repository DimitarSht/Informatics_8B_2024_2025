#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int suma = 0;
    if(N <= 50)
    {
        for(int i = 1; i <= N ; i += 2)
        {
            suma = suma + i;
        }
        cout<<suma;
    }



    return 0;
}




