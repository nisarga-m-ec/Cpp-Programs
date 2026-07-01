#include<iostream>
using namespace std;

int main()
{
    int minutes,hours,remaining;

    cout<<"Enter minutes: ";
    cin>>minutes;

    hours=minutes/60;
    remaining=minutes%60;

    cout<<"Hours = "<<hours<<endl;
    cout<<"Remaining Minutes = "<<remaining;

    return 0;
}
