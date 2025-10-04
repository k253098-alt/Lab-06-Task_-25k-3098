#include <stdio.h>
int main (){
	int amount, twentyfives=0, tens=0, fives=0, ones=0, coins, total;
	printf("Entre amount (cents) :\n");
	scanf("%d",&amount);
	coins = amount;
	while(amount>=25){
		amount -= 25;
		twentyfives ++;
	}
	while(amount>= 10){
		amount -= 10;
		tens ++;
	}
	while(amount>= 5){
		amount -= 5;
		fives ++;
	}
	while(amount >= 1){
		amount -=1;
		ones++;
	}
	    total = twentyfives + tens + fives + ones;
	printf("The minimum coins required to make %d cents are = %d\n",coins,total);
	printf("In which:\n");
	printf("Coins of Twenty Five cents = %d\n",twentyfives);
	printf("Coins of Ten cents = %d\n",tens);
	printf("Coins of Five cents = %d\n",fives);
    printf("Coins of One cent = %d\n",ones);
    return 0;
}
