#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;

    if((a>b && a<c) || (a>c && a<b))
        cout<<"Second Largest = "<<a;

    else if((b>a && b<c) || (b>c && b<a))
        cout<<"Second Largest = "<<b;

    else
        cout<<"Second Largest = "<<c;

    return 0;
}
