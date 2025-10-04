#include<stdio.h>
int main (){
	int total =0 , a ;
	printf("Entre a number:\n");

	while(1){
		printf("Entre a number:\n");
	    scanf("%d" ,&a);
	if (a==0){
			break;
		}
		total += a;
		printf(" Current Sum = %d\n" ,total);
	}
	printf("Final Sum = %d\n",total);
	return 0;
	
}
