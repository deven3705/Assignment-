
#include<iostream>
using namespace std;
int main()
{
int i,n,s=0;
cout<<"enter how many elements u want in array:";
cin>>n;
int a[n];
for(i=0;i<n;i++){
cout<<"\nEnter element:";
cin>>a[i];
s=s+a[i];
}
cout<<"Total sum of array is:"<<s;
return 0;
}
