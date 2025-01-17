#include<bits/stdc++.h> 
#define f(x) x/(1+x) 
using namespace std; 
int main() 
{ 
    float l, u, k; 
    int i, n; 
    cout<<"Lower limit of integration: "; 
    cin>>l; 
    cout<<"Upper limit of integration: "; 
    cin>>u; 
    cout<<"Intervals: "; 
    cin>>n; 
    float h = (u - l)/n; 
    float integration = f(l) + f(u); 
    for(i=1; i<= n-1; i++) 
    { 
        k = l + i*h; 
        integration = integration + 2 * (f(k)); 
        cout<<"value of x:"<<k<<" "<<"value of Y:"<<f(k)<<endl; 
    } 
    integration = integration * h/2; 
    cout<<endl; 
    cout<<fixed<<setprecision(3)<<"Final Inegral Value"<<integration<<endl; 
    return 0; 
} 