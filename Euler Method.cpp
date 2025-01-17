#include <bits/stdc++.h>
using namespace std;
float func(float x, float y)
{
    return 1-y;
}
int main()
{
    float x0, y, h, x;
    cout<<"enter the initial value for x0 : ";
    cin>>x0; //0
    cout<<"enter the initial value for y0 : ";
    cin>>y; //0
    cout<<"enter the value for h : ";
    cin>>h; //0.1
    cout<<"enter the approximation value for x : ";
    cin>>x; //0.3
    while (x0 < x) {
        y = y + h * func(x0,y);
        x0 = x0 + h;
        cout << "Approximate solution at x = " << x0 << " is " << y << endl;
    }
    return 0;
}