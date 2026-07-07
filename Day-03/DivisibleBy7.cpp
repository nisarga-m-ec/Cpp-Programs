#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter a number: ";
    cin>>num;

    if(num%7==0)
        cout<<"The number is divisible by 7";
    else
        cout<<"The number is not divisible by 7";

    return 0;
}
