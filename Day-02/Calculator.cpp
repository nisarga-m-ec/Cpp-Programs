#include<iostream>
using namespace std;

int main()
{
    float a,b;
    char op;

    cout<<"Enter expression (Example: 5 + 3): ";
    cin>>a>>op>>b;

    switch(op)
    {
        case '+': cout<<"Result = "<<a+b; break;
        case '-': cout<<"Result = "<<a-b; break;
        case '*': cout<<"Result = "<<a*b; break;
        case '/':
            if(b!=0)
                cout<<"Result = "<<a/b;
            else
                cout<<"Division by zero is not allowed";
            break;
        default:
            cout<<"Invalid Operator";
    }

    return 0;
}
