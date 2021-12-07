#include<stdio.h>
int main(){
	int a;
	printf("enter the number");
	scanf("%d",&a);
	
	if(a%5==0 && a%11==0)
	{
		printf("yes the number divisible by 5 and 11 %d",a);
	}
	else
	{
		printf("no it is not divisible by 5 and 11 %d",a);
	}
	return 0;
}
