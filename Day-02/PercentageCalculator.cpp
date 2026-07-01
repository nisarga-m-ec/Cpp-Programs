#include<iostream>
using namespace std;

int main()
{
    float total,obtained,percentage;

    cout<<"Enter Total Marks: ";
    cin>>total;

    cout<<"Enter Obtained Marks: ";
    cin>>obtained;

    percentage=(obtained/total)*100;

    cout<<"Percentage = "<<percentage<<"%";

    return 0;
}
