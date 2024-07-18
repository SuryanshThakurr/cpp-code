#include<iostream>
using namespace std;
 
 int main()
 {
    int a,b,c,d;
    cout<<"Enter the value:";
    cin>>a;
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    d=a+b+c;
    
    cout<<"sum of digit"<<d;

 }