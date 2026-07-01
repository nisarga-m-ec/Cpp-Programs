#include<iostream>
using namespace std;

int main()
{
    float P,R,T,SI;

    cout<<"Enter Principal, Rate and Time: ";
    cin>>P>>R>>T;

    SI=(P*R*T)/100;

    cout<<"Simple Interest = "<<SI;

    return 0;
}
