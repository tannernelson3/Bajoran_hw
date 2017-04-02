/*
 * =====================================================================================
 *
 *       Filename:  Barjoran_hw8_task2.c
 *       	Usage:  ./Barjoran_hw8_task2.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/01/2017 11:02:09 PM
 *
 Compiler:  gcc -Wall -Werror -lm 
 *         Author:  Daniel Tayler (), danieltayler@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <string.h>

#define MAX 81
/* Function Prototypes */
void Usage(void); 
void getOptions(char task, char str[]);
void PrintOption(char *string);

/* Main Program */
int  main(int argc, char *argv[])
{

	char task;
	char str[MAX];
	task = atoi(argv[1]);


	if (argc != 2)
	{
		printf("you don't have the correct number of perameters plz check again, you should have two\n");
	}
	else if ( task != 'p' ||task !='l' ||task != 'u')
	{
		printf(" did use right stype default now is p\n");
		task = 'p';
	} 
	getOptions(task, str);
	PrintOption(str);

	return 0;
}


/* Function Defenitions */
void Usage(void) 
{
	exit (1);
	return;
}


void getOptions(char task,char str[] )
{
	printf("please enter someithng until you want ot end which is crt d");
	(*str) =getchar();
	if (task == 'p')
	{
			printf("we've left it alone like you wanted");
	}
	else if (task == 'l')
	{
		for ( int i = 0; i < (sizeof(str)/sizeof(char)) ; i++)
		{
			str[i]= toupper(str[i]);
		}

	}
	else if (task == 'u')
	{
		for ( int i = 0; i < sizeof(str)/sizeof(char) ; i++)
		{
			str[i]= tolower(str[i]);
		}

	}
	return;
}

void PrintOption(char *string)
{
		for ( int i = 0; i < sizeof(string)/sizeof(char) ; i++)
		{
			printf("%c" , string[i]);
		}
	return;
}
