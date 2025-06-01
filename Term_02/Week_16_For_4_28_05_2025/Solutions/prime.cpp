#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
        {
            for(int j = 2; j <= i / 2; j++)
            {
                if(i % j == 0)
                {
                    cnt++;
                }
            }
            if(cnt == 0)
            {
                cout<<i<<" ";
            }
        }
    }

    return 0;
}
