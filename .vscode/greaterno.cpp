#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first value:";
    cin>>a;
    cout<<"Enter the second value:";
    cin>>b;
    if(a>b)
    {
        cout<<"The given value is greater.:"<<a;

    }
    else if(b>a)
    {
        cout<<"The given value is greater:"<<b;
    }
    else{
        cout<<"The given value is same:"<<a;
    }
}
