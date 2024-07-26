#include<iostream>
using namespace std;
int main()
{
    float a,b,c,d;
    cout<<"Enter the coefficient of a:";
    cin>>a;
    cout<<"Enter the coefficient of b:";
    cin>>b;
    cout<<"Enter the coefficient of c:";
    cin>>c;
    d=b*b-4*a*c;

    if(d>0){
    cout<<"The roots are real distinct:";
    }
    else if(d==0){
    cout<<"The roots are real and equal";
    }
    else{
        cout<<"The roots are imaginary";
    }

  
}
