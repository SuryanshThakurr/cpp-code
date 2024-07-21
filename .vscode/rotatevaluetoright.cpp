#include<iostream>
using namespace std;
int main()
{
 int a,b,c;
 cout<<"Enter the value:";
 cin>>a;
 b=a%10;
 c=(b*100)+a/10;
 cout<<"Result after right rotation of last digit:"<<c;
}
