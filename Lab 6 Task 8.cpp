#include<stdio.h>
#include<math.h>
int main(){
	int num, total;
	printf("Entre number of persons in a group:\n");
	scanf("%d",&num);
	total = ceil(num*250.50);
	printf("The amount for agroup to pay is %d\n",total);
	return 0;
}
