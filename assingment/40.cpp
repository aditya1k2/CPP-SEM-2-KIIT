/* Name:- Aditya Kumar Gupta
		Roll No.:- 1706291
		Ques No.:-40 */
#include<iostream>
using namespace std;
int main()
{
int a[100],b[100],n1,n2,i,s,j,k;k=0;
cout<<"enter range of 1st and second array\n";
cin>>n1>>n2;
cout<<n1<<n2;
cout<<"enter 1st array\n";
for(i=0;i<n1;i++)
{
cin>>a[i];
}
cout<<"enter second array\n";
for(i=0;i<n2;i++)
{
cin>>b[i];
}
for(i=0;i<n1;i++)
{
for(j=0;j<n2;j++)
{
if(a[i]==b[j]||a[i]<b[j])
{
k++;
}
}
cout<<"for "<<a[i]<<" element in the first array the no of elements equal to or less than it in the second array is"<<k<<"\n";
k=0;
}
return 0;
}
