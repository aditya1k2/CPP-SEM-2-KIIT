/* Name:- Aditya Kumar Gupta
		Roll No.:- 1706291
		Ques No.:-35 */
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int x1,y1,z1,x2,y2,z2,x,y,z;
float dist;
x=y=z=0;dist=0.0;
cout<<"enter the value of 1st point\n";
cin>>x1>>y1>>z1;
cout<<"enter the values for 2nd point\n";
cin>>x2>>y2>>z2;
x=(x2-x1)*(x2-x1);
y=(y2-y1)*(y2-y1);
z=(z2-z1)*(z2-z1);
dist=pow((x+y+z),0.5);
cout<<"distance between the given point is"<<dist;
return 0;
}
