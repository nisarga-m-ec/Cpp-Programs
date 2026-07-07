#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;

    cout<<"Enter the limit: ";
    cin>>n;

    for(int i=1;i<=n;i=i+2)
    {
        sum=sum+i;
    }

    cout<<"Sum of Odd Numbers = "<<sum;

    return 0;
}
