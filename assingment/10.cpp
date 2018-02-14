/* Name:- Aditya Kumar Gupta
		Roll No.:- 1706291
		Ques No.:-10 */

#include<iostream>
using namespace std;
int main()
{
	int j;
	string line;
	cout<<"Enter The String\n";
	cin>>line;
	for(int i=0;i<line.size();i++)
	{
		if((!(line[i]>='a' && line[i]<='z') || (line[i]>='A' && line[i]<='Z')))
		{
			line[i]='\0';

		}
	}
	cout<<"Output String\n";
	cout<<line<<"\n";
	return 0;
}
