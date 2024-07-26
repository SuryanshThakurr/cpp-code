#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the year:";
    cin>>a;
    if(a%400==0){
        cout<<"leap year";
    }
    else if(a%100==0){
        cout<<"not leap year";
    }
    else if(a%4==0){
        cout<<"leap year";
    }

}