#include<stdio.h>
int* op()
{	
	int *c,p;
	p=-5000000;
	c=&p;
	
	int a,b;
	char flush[2];
	printf("Enter Two Numbers a and b\n");
	scanf("%d%d",&a,&b);
	gets(flush);
	char ch;
	printf("Enter The Operation You Want To Perform\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':*c=a+b;
			 return c;
		case '-':*c=a-b;
			return c;
		case '*':*c=a*b;
			return  c;
		case '%':*c=a%b;
			return c;
		default:
		printf("Operation Does Not Exist\n");
			return c;
	}
	
}
int main()
{
	int *p=op();
	printf("Ans Is:- %d\n",*p);
	return 0;
}
