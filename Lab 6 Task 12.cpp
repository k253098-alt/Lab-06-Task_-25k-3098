#include <stdio.h>
int main(){
	int a, count =0;
	printf("Entre a number: \n");
	scanf("%d",&a);
	
	while(a !=0){
		if(a & 1){
		count++;}
		a = a>> 1;
	} 
	printf("The number of ones in the binary of given number are %d\n" ,count);
	return 0;
}
