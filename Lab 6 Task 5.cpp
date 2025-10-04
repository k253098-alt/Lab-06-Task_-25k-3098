#include<stdio.h>
int main(){
	int reversed = 0, digit, num;
	printf("entre a number:");
	scanf("%d" ,&num);
	while(num>0){
		digit = num%10; // taking last digit
		reversed = reversed*10 + digit;
		num = num/10;
	} 
	printf("Reversed number is %d",reversed);
	return 0;
}
