#include<iostream>
using namespace std;
int main()
{
int x;
cout<<"Welcome\n";
cout<<"Press any key to print the pattern\n";
for(x=1;x<=5;x++)
{
for(int x1=5;x1>x;x1--)
cout<<" ";
cout<<"*";
for(int x1=1;x1<=2*(x-1)-1;x1++)
cout<<" ";
if(x!=1)
cout<<"*";
cout<<"\n";
}
for(int x=4;x>=1;x--)
{
for(int x1=5;x1>x;x1--)
cout<<" ";
cout<<"*";
for(int x1=1;x1<=2*(x-1)-1;x1++)
cout<<" ";
if(x!=1)
cout<<"*";
cout<<"\n";
}
return 0;
}
