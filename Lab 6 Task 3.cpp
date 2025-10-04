#include<stdio.h>
int main(){
	int avlbal, withdraw, bal;
	
	printf("Entre bank balance of the user :\n");
	scanf("%d" ,&bal);
	
	printf("Entre the withdrawl amount: \n");
	scanf("%d" ,&withdraw);
	
	
	avlbal = bal - withdraw;
	
	while(avlbal>= 0){
		printf("Transaction of %d is succssesful\n" ,withdraw );
		printf("Your remaining balance = %d\n" ,avlbal);
		break;
		
	} if(avlbal<0){
		printf("Insufficient Balance\n");
		printf("You have %d blance\n" ,bal);
		
			avlbal = bal - withdraw;
			
	}return 0;
}
