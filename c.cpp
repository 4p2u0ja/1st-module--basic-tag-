#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,mul=1,mul1=1;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        mul*=a[i];
        if(i%2!=0)
            mul1*=a[i];
    }
    cout<<"Sum is : "<<sum<<" "<<" Multiplication is : "<<mul<<" Odd MUL: "<<mul1;

    return 0;
}