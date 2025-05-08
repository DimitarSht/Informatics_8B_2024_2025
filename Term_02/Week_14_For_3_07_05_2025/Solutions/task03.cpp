#include<iostream>
using namespace std;
int main()
{
    int MIN = INT_MAX;
    int MAX = INT_MIN;

    int number;

    for( ; ; )
    {
        cin>>number;
        if(number == 0)
        {
            cout<<MIN<<" "<<MAX<<endl;
            break;
        }
        else
        {
            if(number < MIN)
            {
                MIN = number;
            }
            if(number > MAX)
            {
                MAX = number;
            }
        }
    }

    return 0;
}





