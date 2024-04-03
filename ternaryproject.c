#include<stdio.h>
main()
{
	int number;
	
	printf("enter eny value=");
	scanf("%d",&number);
	
	(number%2==0)?printf("this number is even"):printf("this number is odd");
}