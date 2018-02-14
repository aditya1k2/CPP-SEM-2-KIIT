/* Name:- Aditya Kumar Gupta
		Roll No.:- 1706291
		Sec:- B-19
		Ques No.:-32 */
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
 char str[100],pat[20],new_str[100],rep_pat[50];
 int i=0,j=0,k,n=0,copy_loop=0, rep_index=0;
 cout<<"Enter the string:\n";
 gets(str);
 cout<<"\nEnter the pattern: ";
 gets(pat);
 cout<<"\nEnter the replace pattern:";
 gets(rep_pat);
 while(str[i]!='\0')
 { j=0,k=i;
   while(str[k]==pat[j] && pat[j]!='\0')
   { k++;
     j++;
   }
   if(pat[j]=='\0')
   { copy_loop=k;
     while(rep_pat[rep_index]!='\0')
     { new_str[n]=rep_pat[rep_index];
       rep_index++;
       n++;
     }
   }
   new_str[n]=str[copy_loop];
   i++;
   copy_loop++;
   n++;
 }
 new_str[n]='\0';
 cout<<"\nThe new string is: ";
 puts(new_str);
 return 0;
}
