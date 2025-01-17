#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    float x[50], y[50], m, c;

    cout<<"Enter the total points " << endl;
    cin >> n;

    for(i=1; i<=n; i++)
    {

        cout<<"Co-ordinates :  "<<i<<" : ";
        cin>>x[i];
        cin>>y[i];

    }
    float sumX=0, sumX2=0, sumY=0, sumXY=0;
    for(i=1; i<=n; i++)
    {
        sumX += x[i];

        sumX2 += ( x[i] * x[i] );
      
        sumY += y[i];
       
        sumXY += ( x[i]*y[i] );

    }
    cout<<"sumX = "<<sumX<<endl;
    cout<<"sumX2 = "<<sumX2<<endl;
    cout<<"sumY = "<<sumY<<endl;
    cout<<"sumXY = "<<sumXY<<endl;

    m = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);

    c = ((sumY*sumX2)-(sumX*sumXY))/((n*sumX2)-(sumX * sumX));


    cout << "Values are: c = " << c << " and m = " << m;

    return(0);
}

/*
Input: 
4
0 -1
2 5
5 12
7 20
*/