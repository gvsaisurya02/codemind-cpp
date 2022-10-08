#include<iostream>
using namespace std;
int main()
{
    int n,temp,p,r,s=0;
    cin>>n;
    temp=n;
    p=n*n;
    while(p>0)
    {
        r=p%10;
        s=s+r;
        p=p/10;
    }
    if(temp==s)
    cout<<"Neon Number";
    else
    cout<<"Not Neon Number";
    
}