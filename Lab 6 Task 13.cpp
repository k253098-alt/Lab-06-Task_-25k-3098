#include<stdio.h>
int main(){
	int num;
	printf("Enter a number:\n");
	scanf("%d",&num);
	
	printf("Entered number = %d\n",num);
	printf("Multiplied by 2 = %d\n",num<<1);
	printf("Multiplied by 4 = %d\n",num<<2);
	printf("Multiplied by 4 = %d\n",num<<3);
	
	return 0;
}
