/* Name:- Aditya Kumar Gupta
		Roll No.:- 1706291
		Sec:- B-19
		Ques No.:-2 */

#include<iostream>
using namespace std;
int main()
{
	int matchsticks=21,user,mach;
	cout<<"Enter The Number How Much Matchsticks You Want To choose\nYour Entry Should Be Less Than 5\nEntry Above Is Invalid if your entry is more than 4\nIn That Case Machine Automatically Wins\n";
	while(matchsticks>=1)
	{
		cout<<"Number Of Matchsticks Available Right Now....."<<matchsticks <<"\n";
		cout<<"Your Turn...\n";
		cout<<"Pick Matchsticks(less than 5)\n";
		cin>>user;
		if(user>4)
		{
			cout<<"Invalid Move\n";
			break;
		}
	mach=5-user;
	cout<<"Machine's Turn...\n";
	cout<<"Machine Chooses...\n"<<"\n"<<mach<<"\n";
	matchsticks=matchsticks-user-mach;
	continue;
	if(matchsticks==1)
	break;
	}
		//matchsticks--;
		cout<<"Machine Wins\n";
		return 0;
}
