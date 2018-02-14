/*Name:- Aditya Kumar Gupta
	Roll no. 1706291
	Sec:- B-19
	Ques No.:- 7 */
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x[10],y[10],diff=0,dist=0,a[10],long1=0;
	cout<<"Enter x and y coordinates of 10 points\n";
	for(int i=0;i<3;i++)
	{
		cout<<"Point "<<i+1<<"\n";
		cin>>x[i]>>y[i];
	}

	for(int i=0;i<3;i++)
	{
		diff=diff+(x[i]-x[i+1])*(x[i]-x[i+1])+(y[i]-y[i+1])*(y[i]-y[i+1]);
		dist=sqrt(diff);
		a[i]=dist;
	}
	for(int i=0;i<3;i++)
	{
		if(a[i+1]>a[i])
		{
			long1=a[i+1];

		}
	}
		cout<<"Long="<<long1<<'\n';

	return 0;
}
