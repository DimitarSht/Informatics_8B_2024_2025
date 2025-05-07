#include<iostream>
using namespace std;
int main()
{
    int N, number, suma = 0, broi_chetni = 0;
    int max_number = -1, min_number = 100000;
    cin>>N;
    for(int i = 0; i < N; i++)
    {
        cin>>number;
        suma += number;
        if(number % 2 == 0)
        {
            broi_chetni++;
        }
        if(number > max_number)
        {
            max_number = number;
        }
        if(number < min_number)
        {
            min_number = number;
        }
    }
    cout<<suma<<" "<<broi_chetni<<endl;
    cout<<"Max is: "<<max_number<<endl;
    cout<<"Min is: "<<min_number<<endl;

    return 0;
}
