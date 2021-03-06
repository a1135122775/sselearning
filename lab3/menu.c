#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linklist.h"
int Help();
int Quit();
int Hello();
int Strlength();
int Max();
int Sum();
int Min();
int Avg();
#define MAX_LEN 128
#define Size 10
static tDataNode head[]=
{
	{"help","this is help cmd.",Help,&head[1]},
	{"version","menu program 1.0",NULL,&head[2]},
	{"quit","close the program",Quit,&head[3]},
	{"hello","show hello on the screen",Hello,&head[4]},
	{"strlength","return the length of a string",Strlength,&head[5]},
	{"max","return the maximum of ten numbers",Max,&head[6]},
	{"sum","return the sum of ten numbers",Sum,&head[7]},
	{"min","return the minimum of ten numbers",Min,&head[8]},
	{"avg","return the average of ten numbers",Avg,NULL}
};
int main ()
{
	while(1)
	{
		char cmd[MAX_LEN];
		tDataNode *p;
		printf("please input the cmd\n");
		scanf("%s",cmd);
		p = FindCmd(head,cmd);
		if(p == NULL)
		{
			printf("this is a wrong cmd\n");
			continue;
		}
		if(p->hander!=NULL)
		{
			p->hander();	
		}
	}
	return 0;
};
int Help()
{
	ShowAllCmd(head);
	return 0;
}
int Quit()
{
	exit(0);
}
int Hello()
{
	printf("welcome to the menu\n");
	return 0;
};
int Strlength()
{
    char s[128];
	int a;
	printf("please input one string:");
	scanf("%s",s);
	a=strlen(s);
	printf("\nthe length of the string is %d\n",a);
	return 0;
};
int Max()
{
	int a[Size];
	printf("please input ten numbers\n");
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	};
	int tmp=a[0];
	for(i=1;i<10;i++)
	{
		if(tmp<a[i])
		{
			tmp=a[i];
		};
	};
	printf("The biggest number is %d\n",tmp);
	return 0;
};
int Avg()
{
	int a[Size];
	printf("please input ten numbers\n");
	int i=0,tol=0;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	};
	for(i=0;i<10;i++)
	{
		tol+=a[i];
	};
	printf("The average is %d",tol/10);
	return 0;
};
int Sum()
{
	int a[Size];
	printf("please input ten numbers\n");
	int i=0,tol=0;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	};
	for(i=0;i<10;i++)
	{
		tol+=a[i];
	};
	printf("The total is %d\n",tol);
	return 0;
};
int Min()
{
	int a[Size];
	printf("please input ten numbers\n");
	int i=0;
	for(;i<=9;i++){
		scanf("%d",&a[i]);
	};
	int tmp=a[0];
	for(i=1;i<10;i++)
    {
		if(tmp>a[i])
		{
			tmp=a[i];
		};
	};
	printf("The  minimum is %d\n",tmp);
	return 0;
};