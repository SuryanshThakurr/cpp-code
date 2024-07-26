#include<iostream>
using namespace std;

int main()

{
int a,b,c;

cout<<"Enter the first no. :";
cin>>a;
cout<<"Enter the second no. :";
cin>>b;
cout<<"Enter the third no. :";
cin>>c;

if(a>b && a>c){
    cout<<"The given value is greater:"<<a;
}
else if(b>a && b>c){
    cout<<"The given value is greater:"<<b;
}
else if(c>a && c>b){
    cout<<"The given value is greater:"<<c;
}

else{
    cout<<"The given values are same:"<<a||b||c;
}

}