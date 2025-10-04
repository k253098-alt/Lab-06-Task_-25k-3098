#include<stdio.h>
int main (){
	int a,b;
	printf("Enter two numbers: \n");
	scanf("%d %d",&a ,&b);
	
	a=a^b;
	b=b^a;
	a=a^b;
	printf("The numbers after swaping are: \n%d \n%d",a,b);
	return 0;
}
