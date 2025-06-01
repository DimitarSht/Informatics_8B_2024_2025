#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int h, mins, duration;
    int maxH = 0, maxM = 0, maxMinutes = 0;
    for(int i = 0; i < N; i++)
    {
        cin>>h>>mins>>duration;
        int minutes = h * 60 + mins + duration;
        if(minutes > maxMinutes)
        {
            maxMinutes = minutes;
        }
    }
    maxH = maxMinutes / 60;
    maxM = maxMinutes % 60;
    cout<<maxH<<" "<<maxM;
    return 0;
}

