/*name- anshika rai
roll no.- 1706301
question no.- 30*/

#include<iostream>
using namespace std;
int main()
{
int a[100],i,odd,k,small,pos,large;
k=0;odd=0;pos=0;
cout<<"enter the array\n";
for(i=0;i<5;i++)
{
cin>>a[i];
}
small=a[0];large=a[0];
for(i=0;i<5;i++)
{
if(a[i]%5==0)
{
k++;
}
if(a[i]%2!=0)
{
odd++;
}
if(small>a[i])
{
small=a[i];
}
if(large<a[i])
{
pos=i;
}
}
cout<<"no. of elements divisible by 5= "<<k;
cout<<"\n no of odd elements are "<<odd;
cout<<"\n smallest element in the array is "<<small;
cout<<"\n position of the largest in the array is "<<pos+1;
return 0;
}
