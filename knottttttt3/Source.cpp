#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int h,a;
	float w;
	printf("enter your height : ");
	scanf_s("%d",&h);
	printf("\nenter your age : ");
	scanf_s("%d",&a);
	printf("\nenter your weight : ");
	scanf_s("%f",&w);
	
	printf("your height is %d \n",h);
	printf("your age is %d \n",a);
	printf("your weight is %.2f",w);
	
	return 0;
}