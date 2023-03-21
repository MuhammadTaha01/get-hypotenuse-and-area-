#include<iostream>
using namespace std;
int main()
{
    int h,a,x,y;
    cout<<"Enter value of x: ";
    cin>>x;
    cout<<"Enter value of y: ";
    cin>>y;

    h=x*x+y*y;
    cout<<"The value of hypotenuse is: "<<h<<endl;

    a=0.5*x*y;
    cout<<"The value of area is: "<<a;

    return 0;
}
