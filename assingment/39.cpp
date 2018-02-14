/* Name:- Harshit Raj
	Roll No.:-1706325
	Ques No.:- 39 */
#include<iostream>
using namespace std;
int main()
{
int n,a[100],i,sum,j,k,triplet;
cout<<"enter the rangeof the array\n";
cin>>n;
cout<<"enter the elements of the array\n";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"enter the sum value\n";
cin>>sum;
triplet=0;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
for(k=j+1;k<n;k++)
{
if(a[i]+a[j]+a[k]==sum)
{
triplet++;
}
}
}
}
cout<<"no of times triplet comes"<<triplet;
return 0;
}
