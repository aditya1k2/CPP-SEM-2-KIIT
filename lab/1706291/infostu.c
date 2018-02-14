#include<stdio.h>
#include<malloc.h>
struct student
{
	char name[20];
	int roll;
};
void input(struct student *p,int x)
{
	int i=1;
	char flush[10];
	struct student *s=p;
	while(s<p+x)
	{
		gets(flush);
		printf("Enter The Information of Student\n");
		printf("Name:-\n");
		gets(s->name);
		printf("Roll No.:-\n");
		scanf("%d",&(s->roll));
		s++,i++;
	}
}
void display(struct student *p)
{
	printf("The Name Of Student Is:- %s\n",p->name);
	printf("The Roll Number Of The Student Is:- %d\n",p->roll);
}		
int main()
{
	int n;
	printf("Enter The Number Of Students\n");
	scanf("%d",&n);
	struct student *s=(struct student*)calloc(n,sizeof(struct student));
	input(s,n);
	printf("Detail Of The Students Are...\n");
	display(s);
	return 0;
}
