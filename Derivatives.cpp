#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n;
    cout << "Total number of data: " << endl;
    cin >> n;
    double x[20], y[20][20];
    int i,j;
    for(i = 0; i < n ; i++)
    {
        cout << "x[" << i << "] = ";
        cin >> x[i];
        cout << "y[" << i <<"] = ";
        cin >> y[i][0];
    }
    for(i = 1; i < n; i++)
    {
        for(j = 0; j < n-i; j++)
        {
            y[j][i] = y[j+1][i-1] - y[j][i-1];
        }
    }
    cout <<  endl;
    for(i = 0; i < n; i++)
    {
        cout << x[i];
        for(j = 0; j < n-i ; j++)
        {
            cout << "\t" << y[i][j];
        }
        cout << endl;
    }
    double  d1, d2,s,u;
    cout<<"enter the value of x: ";
    cin>>s;
    double h = x[1] - x[0];
    cout<<"h = "<<h<<endl;
    u =( s - x[0] )/h;
    cout<<"u = "<<u<<endl;
    d1 = (1/h)*(y[0][1]+(((2*u -1)*y[0][2])/2.0)+(( (3*u*u + 6*u +2)*y[0][3])/(3.0*2.0)));
    cout<<d1<<endl;
   d2= (1/(h*h))*(y[0][2]+((u-1)*y[0][3])+(((6*u*u-18*u+11)*y[0][4])/12.0));
    cout<<d2<<endl;
   return 0;
}
/*
6
0 0
0.2 0.12
0.4 0.48
0.6 1.10
0.8 2.0
1.0 3.20
0.7
*/