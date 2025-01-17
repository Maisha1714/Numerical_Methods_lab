#include<bits/stdc++.h>
using namespace std;

float f(float x, float y)
{
    return (x*x + y*y) ;
}

int main()
{
    float x, y0, h ;
    cout<<"enter the initial value of x"<<endl;
    cin>>x;
    cout<<"enter the initial value of y"<<endl;
    cin>>y0;
    cout<<"enter the value of h"<<endl;
    cin>>h;
    float xn;
    cout<<"enter the last value of x"<<endl;
    cin>>xn;
    int n = (int)((xn - x) / h);
    cout<<endl<<"Result"<<endl<<endl;
    float y=y0;
    float m1,m2,m3,m4;
    for (int i=1; i<=n; i++)
    {

        m1 = f(x, y);
        cout<<"m1 ="<<m1<<endl;
        m2 = f(x + 0.5*h, y + 0.5*m1*h);
        cout<<"m2 ="<<m2<<endl;
        m3 = f(x + 0.5*h, y + 0.5*m2*h);
        cout<<"m3 ="<<m3<<endl;
        m4 = f(x + h, y + m3*h);
        cout<<"m4 ="<<m4<<endl;
        y = y + (1.0/6.0)*(m1 + 2*m2 + 2*m3 + m4)*h;
        x = x + h;
        cout<<"\nValue of y at x = "<< x<< " is " << y<<endl;

    }
    return 0;
}
