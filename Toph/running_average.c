#include<bits/stdc++.h>
using namespace std;
int main()
{
cout.precision(11);
int n;
cin>>n;
int a[n];
double avg=0;
double sum=0,j=1;
for(int i=1; i<=n; i++)
{
    cin>>a[i];
    sum+=a[i];
    avg=sum/i;
    cout<<avg<<endl;
}
return 0;
}