#include<stdio.h>
#include<math.h>
int main (){
	float i,m,s;
	printf("Entre the intensity of earthquake\n");
	scanf("%f",&i);
	printf("Entre the standard reference value of earthquake\n");
	scanf("%f",&s);
	
	m = log10(i/s);
	printf("The magnitude of Earthquake = %.3f",m);
	return 0;
}
