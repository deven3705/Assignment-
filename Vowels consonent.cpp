#include<iostream>
using namespace std;
int main(){
string str;
int i,n;
cout<<"Enter the string:";
cin>>str;
n=str.length();
for(i=0;i<n;i++){
if(str[i]=='a'||str[i]=='A'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u'){
    cout<<str[i];
}
}
for(i=0;i<n;i++){
if(!(str[i]=='a'||str[i]=='A'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')){
    cout<<str[i];
}
}
return 0;
}
