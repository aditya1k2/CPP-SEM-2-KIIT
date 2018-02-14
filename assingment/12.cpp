/*Name:- Aditya Kumar Gupta
	Roll no. 1706291
	Sec:- B-19
	Ques No.:- 1 */

#include<iostream>
using namespace std;
int main()
{
	int n=500,i,d1,d2,d3,sum;
	cout<<"Armstrong Between 1 to 500 are\n";
	for(i=0;i<n;i++)
	{
		d1=i-(i/10)*10;
		d2=(i/10)-(i/100)*10;
		d3=(i/100)-(i/1000)*10;
		sum=(d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3);
		if(i==sum)
		{
			cout<<i<<"\t";
		}
	}
		return 0;
}
