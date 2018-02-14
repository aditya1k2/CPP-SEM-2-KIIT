/*Name:- Aditya Kumar Gupta
	Roll no. 1706291
	Sec:- B-19
	Ques No.:- 9 */

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n;
	char str[25][25],temp[25];
	cout<<"Enter How Many Strings You Want To Enter\n";
	cin>>n;
	cout<<"Enter Strings One By One\n";
	for(int i=0;i<n;i++)
	  cin>>str[i];
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	cout<<"Oder Of Sorted Strings\n";
	for(int i=0;i<n;i++)
	cout<<str[i]<<"\n";;
	return 0;
}
