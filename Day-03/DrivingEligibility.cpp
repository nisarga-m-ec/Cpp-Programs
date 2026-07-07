#include<iostream>
using namespace std;

int main()
{
    int age;

    cout<<"Enter your age: ";
    cin>>age;

    if(age>=18)
        cout<<"Eligible for Driving";
    else
        cout<<"Not Eligible for Driving";

    return 0;
}
