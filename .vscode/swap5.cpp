#include<iostream>
using namespace std;

int main()
{
int a,b;
cout<< "Enter the value of a and b:";
cin>> a>>b;
a=a+b-(b=a);
cout<<"Result:"<<a<<" "<<b;


}