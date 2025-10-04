#include<stdio.h>
int main (){
	int num, reminder, result=0 , onum;
	printf("Entre the number:");
	scanf("%d",&num);
	
	onum = num;
	
	// Sum ofcubes 
	while(num != 0){
		reminder = num%10; // take last digit
		result += reminder*reminder*reminder; // cube then add
		num /= 10; // removing last digit
		
	//Condition check	
	}
	if (result == onum){
		printf("The %d is Armstrong number.\n", onum);
	}else{
	printf("%d is not an Armstrong number.\n", onum);
}
	return 0;
}
