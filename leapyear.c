#include<stdio.h>
int main()
{
	int f;
	scanf("%d",&f);
	if((f%4==0 && f%100!=0)||(f%400==0))
	printf("yes");
	else
	printf("no");
}
