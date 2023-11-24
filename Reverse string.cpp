                                                revstr.cpp                                                                
#include<iostream>
using namespace std;
int main()
{
string str;
int n;

cout << "ENter string: ";
cin >> str;
n = str.length();

for(int i=n-1;i>=0;i--)
{
cout << str[i] ;
}


return 0;
}
