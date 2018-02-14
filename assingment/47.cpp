/* Name:- Aditya Kumar Gupta
		Roll No.:- 1706291
		Ques No.:-47 */

#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int v=0,c=0;
        int tr=1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                c=0;
                v++;
            }
            else if(s[i]=='?')
            {
                c++;
                v++;
            }
            else
            {
                v=0;
                c++;
            }

            if(c>3||v>5)
            {
                tr=0;
                break;
            }
        }
        if(tr==0)
        {
            cout<<"BAD"<<endl;
        }
        else
        {
            cout<<"GOOD"<<endl;
        }
    }

	return 0;
}
