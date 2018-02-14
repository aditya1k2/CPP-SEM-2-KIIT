/*Name:- Aditya Kumar Gupta
	Roll no. 1706291
	Sec:- B-19
	Ques No.:- 4 */
#include<iostream>
//#include<math.h>
using namespace std;
int main()
{
	int n,x=0;
	float sum=1,sumf=0;
	cout<<"Enter The Value Upto Which You Want to Find The Sum Of Log Series\n";
	cin>>n;
	cout<<"Enter The Value Of x\n";
	cin>>x;
	for(int i=1;i<=n;i++)
	{
		sum=sum*(x-1)/x;
		sumf=sumf+sum;

	}
	sumf=0.5*sumf;
	cout<<"Sum="<<sumf<<"\n";
	return 0;
}
