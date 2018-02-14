/* Name:- Niharika Agrawal
Roll no.:- 1706338
Ques No.:- 13 */

#include<iostream>
struct cricket
{
char name[200];
int age;
int match;
long runs;
};
void sort(struct cricket c[20]);
using namespace std;
int main()
{
struct cricket s[20];
int i,j;
for(i=0;i<20;i++)
{
cout<<"Enter the name of the cricketer "<<i+1<<"\n";
cin>>s[i].name;
cout<<"Enter the age of "<<s[i].name<<"\n";
cin>>s[i].age;
cout<<"Enter the test matches he has played\n";
cin>>s[i].match;
cout<<"Enter the average run of the batsman\n";
cin>>s[i].runs;
}
sort(s);
for(i=0;i<20;i++)
{
cout<<"Name:- "<<s[i].name<<"\t"<<" Age:-"<<s[i].age<<"\t"<<" No. Of matches palyed by him:- "<<s[i].match<<"\t"<<" Runs Scored:- "<<s[i].runs<<"\n";
}
return 0;
}
void sort(struct cricket c[20])
{
struct cricket cl;
int i,j;
for(i=0;i<20;i++)
{
for(j=i+1;j<20;j++)
{
if(c[i].runs>c[j].runs)
{
cl=c[i];
c[i]=c[j];
c[j]=cl;
}
}
}
}
