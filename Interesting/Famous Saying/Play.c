#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int x;
	srand(time(NULL));
	x = rand();
	
	
	if (x < 18)
	{
		printf("easy prasy lemon squeezy\n");
	}
	else
	{
		printf("Domain Expansion:Idle Death Gamble\n");
	}
	return 0;

}
