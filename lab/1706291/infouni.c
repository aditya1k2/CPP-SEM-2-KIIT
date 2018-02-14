#include<stdio.h>
struct uni
{
	char name[20];
	int year;
	int capacity;
};
void info(struct uni *u)
{
	printf("Enter The Name Of The University\n");
	gets(u->name);
	printf("Enter The Year OF Establishment Of The University\n");
	scanf("%d",&u->year);
	printf("Enter The Capacity Of The University\n");
	scanf("%d",&u->capacity);
}
display(struct uni u)
{
	printf("Name Of University:-%s\n",u.name);
	printf("Year Of Establishment:-%d\n",u.year);
	printf("Capacity OF University:-%d\n",u.capacity);
}
int main()
{
	struct uni u1;
	info(&u1);	
	display(u1);
	
	return 0;
}
