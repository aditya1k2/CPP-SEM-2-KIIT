/* Name:- Aditya Kumar Gupta
		Roll No.:- 1706291
		Ques No.:-50 */

#include<iostream>
using namespace std;
int main()
{
int date,month,year;
int month_12[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int i,j,k=0;
char week[7][15]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
cout<<"enter a date (DD/MM/YYYY)";
cin>>date>>month>>year;
if((year%400==0)||(year%4==0)&&(year%100!=0))
{
month_12[1]=29;
}
for(i=0;i<month-1;i++)
{
k+=month_12[i];
}
k=k+(date+year+(year/4)-2);
k=k%7;
cout<<"\nday is : "<<week[k];
return 0;
}
