#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "menu.h"




void Quit(int argc, char *argv[])
{
    exit(0);
}

void Version(int argc, char *argv[])
{
    printf("version4.0\n");
}

void Directory(int argc, char *argv[])
{
    char buf[80];
    getcwd(buf,sizeof(buf));
    printf("current working directory: %s\n",buf);    
}
int Strlength(int argc, char *argv[])
{
	int a;
    char s[128];
	stpcpy(s,argv[1]);
	a=strlen(s);
	printf("\nthe length of the string is %d\n",a);
	return 0;
};

int Sum(int argc, char *argv[])
{
	int a[5];
	int i=0,tol=0;
	for(i=0;i<5;i++){
		a[i] = atoi(argv[i+1]);
	};
	for(i=0;i<5;i++)
	{
		tol+=a[i];
	};
	printf("The total is %d\n",tol);
	return 0;
};

int main(int argc,char* argv[])
{
    MenuConfig("version","XXX1.0(Menu program v7.0 inside)",NULL);
    MenuConfig("quit","Quit from XXX",Quit);
    MenuConfig("directory","Show the work path",Directory);
    MenuConfig("strlength","return the length of a string",Strlength);
    MenuConfig("sum","return the sum of 5 numbers",Sum);
    ExecuteMenu();
}