#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define Size 10
void help()
{
	printf("******************************Help*******************************\n");
	printf("\thelp lit\n");
	printf("\t help show the help list\n");
	printf("\t hello show hello on the screen\n");
	printf("\t quit help exit the program\n");
	printf("\t strlength return the length of a string\n");
	printf("\t max return the maximum of ten numbers\n");
	printf("\t avg return the average of ten numbers\n");
	printf("\t tol return the total of ten numbers\n");
	printf("\t min returns the minimum of ten numbers\n");
	printf("******************************Help*******************************\n");
};
void hello()
{
	printf("welcome to the menu\n");
};
void quit()
{
	exit(0);
};
void strlength()
{
    char s[128];
	int a;
	printf("please input one string:");
	scanf("%s",s);
	a=strlen(s);
	printf("\nthe length of the string is %d\n",a);
};
void max()
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
};
void avg()
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
};
void tol()
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
};
void min()
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
};
int main()
{
    char cmd[128];
    while (1)
    {
        printf("please input command:\n");
        scanf("%s", cmd);
        if (strcmp(cmd, "help") == 0)
        {
            help();
        }
        else if (strcmp(cmd, "quit") == 0)
        {
            quit();
        }
        else if (strcmp(cmd, "hello") == 0)
        {
            hello();
        }
        else if (strcmp(cmd, "strlength") == 0)
        {
            strlength();
        }
        else if (strcmp(cmd, "min") == 0)
        {
            min();
        }
        else if (strcmp(cmd, "max") == 0)
        {
            max();
        }
        else if (strcmp(cmd, "tol") == 0)
        {
            tol();
        }
        else if (strcmp(cmd, "avg") == 0)
        {
            avg();
        }
        else
        {
            printf("Error: unsupported comman\n");
        };
    };
}
